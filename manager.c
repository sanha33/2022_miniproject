
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "manager.h"


void searchProductName(Product *p, int count){
    int scnt = 0;
    char search[20];

    printf("검색할 이름? ");
    scanf("%s", search);
    printf("\nNo  Name  Desc  Weight   price   method\n");
    printf("====================================\n");
    for(int i=0; i<count; i++){
        if(p[i].price == -1) continue;
        if(strstr(p[i].name,search)){
            printf("%2d ",i+1);
            readProduct(p[i]);   
            scnt++;
        }
        
    }
    if(scnt==0) printf("=> 검색된 데이터 없음!");
    printf("\n");
} 

void searchProductPrice(Product *p, int count){
    int scnt = 0;
    int search=0;

    printf("검색할 가격대?(입력한 가격대 이상의 제품을 출력) ");
    scanf("%d", &search);
    printf("\nNo  Name  Desc  Weight   price   method\n");
    printf("====================================\n");
    for(int i=0; i<count; i++){
        if(p[i].price == -1) continue;
        if(p[i].price>= search){
            printf("%2d ",i+1);
            readProduct(p[i]);   
            scnt++;
        }
        
    }
    if(scnt==0) printf("=> 검색된 데이터 없음!");
    printf("\n");
} 


void searchProductMethod(Product *p, int count){
    int scnt = 0;
    int search=0;

    printf("검색할 제품배송 방법? ");
    scanf("%ls", &search);
    printf("\nNo  Name  Desc  Weight   price   method\n");
    printf("====================================\n");
    for(int i=0; i<count; i++){
        if(p[i].price == -1) continue;
        if(p[i].method==search){
            printf("%2d ",i+1);
            readProduct(p[i]);   
            scnt++;
        }
        
    }
    if(scnt==0) printf("=> 검색된 데이터 없음!");
    printf("\n");
} 

int loadData(Product *p){
    int i = 0;
    FILE *fp;
    fp = fopen("product.txt","rt");
    if(fp==NULL) {
        printf("파일 없음.");
        return -1;
    }
    for (i = 0; i < 100; i++)
    {
       fscanf(fp,"%s", p[i].name);
       if(feof(fp)) break;
       fscanf(fp,"%s", p[i].desc);
       fscanf(fp,"%s", p[i].weight);
       fscanf(fp, "%d",&p[i].price);
       fscanf(fp, "%d",&p[i].method);
  
    }
    fclose(fp);
    printf("=> 로딩 성공!\n");
    return i;
    
}
void savaData(Product *p, int count){

    FILE *fp;
    fp = fopen("product.txt","wt");

    for(int i =0;i<count;i++){
        if(p[i].price==-1) continue;
        fprintf(fp, "%s %s %s %d %d\n",p[i].name, p[i].desc,p[i].weight,p[i].price,p[i].method);

    }
    fclose(fp);
    printf("=> 저장됨! ");
}



int selectMenu(){
    int menu;
    printf("\n*** miniproject ***\n");
    printf("1. 조회\n");
    printf("2. 추가\n");
    printf("3. 수정\n");
    printf("4. 삭제\n");
    printf("5. 저장\n");
    printf("6. 검색\n");
    printf("0. 종료\n\n");
    printf("=> 원하는 메뉴는? ");
    scanf("%d", &menu);
    return menu;
}
void listProduct(Product *plist,int count){

    printf("\nNo  Name  Desc  Weight  Price  Method\n");
    printf("====================================\n");
    for(int i=0; i<count; i++){
        if(plist[i].price == -1) continue;
        printf("%2d ",i+1);
        readProduct(plist[i]);
    }
    printf("\n");
}

int selectDataNo(Product *plist, int index){
    int no;
    listProduct(plist, index);
    printf("번호는 (최고 :0)?");
    scanf("%d", &no);
    return no;
}
