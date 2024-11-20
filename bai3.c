#include<stdio.h>
int main(){
    int num1, num2;
    printf("nhap so thu nhat ");
    scanf("%d", &num1);
    printf("nhap so thu hai ");
    scanf("%d", &num2);
    int tong = num1 +num2;
    printf("tong 2 so la : %d\n", tong);
    int hieu = num1 - num2;
    printf("hieu 2 so la : %d\n", hieu);
    int tich = num1 * num2;
    printf("tich 2 so la : %d\n", tich);
    float thuong = (float)num1 / num2;
    printf("thuong 2 so la : %.3f\n", thuong);
    return 0;
    }

