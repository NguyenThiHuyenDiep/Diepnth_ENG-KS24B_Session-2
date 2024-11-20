#include<stdio.h>
int main(){
    int chieu_dai, chieu_rong;
    printf("nhap so do chieu dai cua hinh chu nhat ");
    scanf("%d", &chieu_dai);
    printf("nhap so do chieu rong cua hinh chu nhat ");
    scanf("%d", &chieu_rong);
    int chu_vi = (chieu_dai+chieu_rong)*2;
    printf("chu vi hinh chu nhat la : %d\n", chu_vi);
    int dien_tich = chieu_dai*chieu_rong;
    printf("dien tich hinh chu nhat la : %d\n", dien_tich);
    return 0;
}
