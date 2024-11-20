#include<stdio.h>
int main(){
    float PI = 3.14;
    float ban_kinh ;
    printf("nhap ban kinh hinh tron ");
    scanf("%f", &ban_kinh);
    float chu_vi = 2*ban_kinh*PI;
    printf("chu vi hinh tron la : %f\n", chu_vi);
    float dien_tich = PI*ban_kinh*ban_kinh;
    printf("dien tich hinh tron la : %f\n", dien_tich);
    return 0;
}
