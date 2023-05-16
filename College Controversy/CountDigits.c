#include <stdio.h>

int countDigits(int n) {
    if (n == 0) {
        return 0;
    } else {
        return 1 + countDigits(n/10);
    }
}

int main() {
    int n;
    printf("Enter Number to Count Digits: ");
    scanf("%d", &n);
    printf("The number %d has %d digits.\n", n, countDigits(n));
    return 0;
}