#include <stdio.h>

int main() {
    int n, i;
    unsigned long long a = 0, b = 1, next;

    printf("Nhập vào n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Số nhập vào không hợp lệ.\n");
        return 1;
    }

    printf("Dãy Fibonacci đầu tiên là:\n");

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%llu ", a);
            continue;
        }
        if (i == 2) {
            printf("%llu ", b);
            continue;
        }
        next = a + b;
        a = b;
        b = next;
        printf("%llu ", next);
    }

    printf("\n");
    return 0;
}