#include <stdio.h>
#include <math.h>

int main() {
    int i, digit, sum, original;

    printf("Các số Armstrong có 3 chữ số là:\n");
    for (i = 100; i <= 999; i++) {
        original = i;
        sum = 0;


        while (original > 0) {
            digit = original % 10;
            sum += pow(digit, 3);
            original /= 10;
        }
        if (sum == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}