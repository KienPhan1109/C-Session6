#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, denta, x1, x2, x;
    printf("Nhập vào số thứ 1: "); scanf("%d", &a);
    if (a == 0){
        printf("Số thứ 1 không thể là 0");
        return 0;
    }
    printf("Nhập vào số thứ 2: "); scanf("%d", &b);
    printf("Nhập vào số thứ 3: "); scanf("%d", &c);
    denta = b * b - 4 * a * c;
    if (denta < 0)
    {
        printf("Phương trình vô nghiệm");
        return 0;
    }
    else if (denta == 0)
    {
        x = -b / 2 * a;
        printf("Phương trình có nghiệm kép với x là: %d", x);
    }
    else
    {
        x1 = (-b + sqrt(denta)) / 2 * a;
        x2 = (-b - sqrt(denta)) / 2 * a;
        printf("Phương trình có hai nghiệm phân biệt với x1 là: %d và x2 là: %d", x1, x2);
    }
    
}