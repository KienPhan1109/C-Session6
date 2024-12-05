#include <stdio.h>

int main(){
    int n = 5, i, a, chan = 0, le = 0;
    for (i = 1; i <= n; i++){
        printf("Nhập vào số thứ %d: ", i);
        scanf("%d", &a);
        if (a < 0){
            printf("Số nhập vào không hợp lệ");
            return 0;
        }
        if (a % 2 != 0)
        {
            le++;
        }
        else
        {
            chan++;
        }
    }
    printf("Số lượng các số lẻ là: %d\n", le);
    printf("Số lượng các số chẵn là: %d\n", chan);
}