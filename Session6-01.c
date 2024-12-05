#include <stdio.h>

int main(){
    int n = 5, i, a, sum;
    for (i = 1; i <= n; i++){
        printf("Nhập vào số thứ %d: ", i);
        scanf("%d", &a);
        if (a < 0){
            printf("Số nhập vào không hợp lệ");
            return 0;
        }
        if (a % 2 != 0)
        {
            sum = sum + a;
        }
    }
    printf("Tổng các số lẻ là: %d", sum);
}