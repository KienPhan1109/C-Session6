#include <stdio.h>

int main(){
    float tienbandau, laisuat, kyhan, tienlai, tiennhanduoc;
    printf("Nhập vào số tiền ban đầu: "); scanf("%f", &tienbandau);
    printf("Nhập vào lãi suất: "); scanf("%f", &laisuat);
    printf("Nhập vào kỳ hạn: "); scanf("%f", &kyhan);
    tienlai = tienbandau * kyhan * (laisuat / 100);
    tiennhanduoc = tienbandau + tienlai;
    printf("Tiền nhận được là: %.2f", tiennhanduoc);
}