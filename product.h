
typedef struct{
    char name[20]; // 제품 이름
    char desc[500]; // 제품 설명
    char weight[20]; //제품의 중량
    int price; // 제품의 가격
    int method; // 제품의 배송 방법 (1: 새벽배송 / 2: 택배배송)
} Product;

int createProduct(Product *p); // 제품을 추가하는 함수 V
int updateProduct(Product *p); // 이미 등록된 제품의 내용을 수정하는 함수 V
int deleteProduct(Product *p); // 제품을 삭제하는 함수 V
void readProduct(Product p); // 하나의 제품 출력 함수 V



