#include <stdio.h>

int main(){
    int i, n;
    printf("Nhập vào n: "); scanf("%d", &n);
    for (i = 1 ; i <= n ; i++){
        if(n % i == 0){
            printf("%d\n", i);
        }
    }
}