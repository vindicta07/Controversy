#include <stdio.h>

void hailstone(int n) {
    printf("%d ", n);
    if (n == 1) {
        return;
    } else if (n % 2 == 0) {
        hailstone(n/2);
    } else {
        hailstone(3*n + 1);
    }
}

int main() {
    int n = 11;
    printf("Hailstone sequence starting with %d: ", n);
    hailstone(n);
    printf("\n");
    return 0;
}