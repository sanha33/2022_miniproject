
#include "product.h"

int selectMenu(); 

int loadData(Product *p); // 파일에 이미 저장된 정보들을 불러오는 함수 
void savaData(Product *p, int count); // 등록된 정보들을 파일에 저장하는 함수 
void listProduct(Product *plist,int count); // 전체 등록된 제품 리스트 출력 
void searchProductName(Product *plist,int count); // 제품이름 검색 
void searchProductPrice(Product *plist,int count); // 제품가격 검색 
void searchProductMethod(Product *plist,int count); // 제품방법 검색 

int selectDataNo(Product *plist, int index);

