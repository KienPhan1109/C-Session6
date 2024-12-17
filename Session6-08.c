#include <stdio.h>
#include <math.h>

int main(){
    float tienbandau, laisuat, kyhan, tienlai, tiennhanduoc;
    printf("Nhập vào số tiền ban đầu: "); scanf("%f", &tienbandau);
    printf("Nhập vào lãi suất: "); scanf("%f", &laisuat);
    printf("Nhập vào kỳ hạn: "); scanf("%f", &kyhan);
    tienlai = tienbandau * pow((1 + (laisuat / 100)), kyhan);
    printf("Tiền lãi là: %.2f", tienlai - tienbandau);
    printf("Tiền nhận được là: %.2f", tienlai);
}