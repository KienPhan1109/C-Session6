#include <stdio.h>

int main(){
    int n, mk = 110906;
    int kiemtra = 0;
    while (kiemtra != 1)
    {
        printf("Nhập vào mật khẩu: "); scanf("%d", &n);
        if (n == mk){
            kiemtra = 1;
        }
        else
        {
            printf("Bạn đã nhập sai mật khẩu\n");
        }
    }
    printf("Bạn đã nhập đúng mật khẩu");
}