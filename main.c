#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "manager.h"


int main(void){

    Product list[100];
    int index = 0;
    int count=0;
    int menu;
   // int result = 0;
    int search = 0;

    count = loadData(list); 
    index = count;

    while (1){
        menu = selectMenu();
        if (menu == 0) break;
        // if (menu == 1||menu==3||menu==4)
        //     if(count == 0) continue;
        if (menu == 1){
            if(count > 0)
                listProduct(list, index);
            else
                printf("데이터가 없습니다.\n");
        }
        else if (menu == 2){
            
           
            count += createProduct(&list[index++]);
            
        }
        else if (menu == 3){
            int no = selectDataNo(list, index);
            if(no == 0){
                printf("=> 취소됨!\n");
                continue;
            }
            updateProduct(&list[no-1]);

        }
        else if (menu == 4){
            int no = selectDataNo(list, index);
            if(no ==0){
                printf("=> 취소됨!\n");
                continue;
            }
            int deleteok;
            printf("정말로 삭제하시겠습니까?(삭제 :1)");
            scanf("%d", &deleteok);
            if(deleteok == 1){
                if(deleteProduct(&list[no-1])) count--;
                printf("=> 삭제됨!");
           }

        }
        else if(menu == 5){
            savaData(list,index);
        }
        else if(menu == 6){
     		printf("어떤 검색을 하시겠습니까?\n");
		printf("1.제품명 검색 2.제품가격대 검색 3.제품배송방법 검색\n");
		scanf("%d",&search);
		while(1){
		if(search==1){
	  	searchProductName(list,count);
		break;
		}else if(search==2){
			searchProductPrice(list,count);
			break;
		}else if(search==3){
			searchProductMethod(list,count);
			break;
		}else{
			printf("다시 입력하세요.(1.제품명 검색 2.제품가격대 검색 3. 제품배송방법 검색)\n"
		}
		
		}
        }
    }
    printf("종료됨!\n");
    return 0;
}
