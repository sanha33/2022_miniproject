
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "product.h"


int createProduct(Product *p){

   // getchar();
    printf("제품 이름: ");
    scanf("%s",p->name);
   // getchar();
    printf("제품 설명: ");
    scanf(" %[^\n]s",p->desc);
   // getchar();
    printf("제품의 중량: ");
    scanf("%s",p->weight);
getchar();
    printf("제품의 가격: ");
    scanf("%d",&p->price);

    printf("제품의 배송방법 : ");
    scanf("%d",&p->method);

    printf("=> 추가됨!\n");
    return 1;
}

int updateProduct(Product *p){

   // getchar();
    printf("제품 이름: ");
    scanf("%s",p->name);
   // getchar();
    printf("제품 설명: ");
    scanf(" %[^\n]s",p->desc);
   // getchar();
    printf("제품의 중량: ");
    scanf("%s",p->weight);
getchar();
    printf("제품의 가격: ");
    scanf("%d",&p->price);

    printf("제품의 배송방법 : ");
    scanf("%d",&p->method);

    printf("=> 수정됨!\n");
    return 1;
}
void readProduct(Product p){
  //  int sum = s.kor + s.eng + s.math;
 //   double avg = sum/3.0;

    printf("%8s %8s %8s %4d %4d \n", p.name, p.desc, p.weight, p.price, p.method );
}


int deleteProduct(Product *p){
 
    p->price = -1;
    p->method = -1;
    return 1;
}

