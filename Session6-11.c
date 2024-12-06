#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    printf("Nhập vào n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Số nhập vào không hợp lệ.\n");
        return 1;
    }

    int count = 0;
    int num = 2;

    printf("Các số nguyên tố đầu tiên:\n");
    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
    printf("\n");

    return 0;
}