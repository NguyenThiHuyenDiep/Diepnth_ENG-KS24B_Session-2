#include<stdio.h>
int main(){
    int canh;
    printf("nhap do dai canh hinh vuong ");
    scanf("%d", &canh);
    int chu_vi = canh*4;
    printf("chu vi hinh vuong la : %d\n", chu_vi);
    int dien_tich = canh*canh;
    printf("dien tich hinh vuong la : %d\n", dien_tich);
    return 0;
}
