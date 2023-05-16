#include <stdio.h>

double power(double x, int n) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x;
    } else {
        return x * power(x, n-1);
    }
}

int main() {
    double x, n;
    printf("Enter The Number Along with the Power Alongside: ");
    scanf("%lf %lf", &x, &n);

    printf("%.2f^%.2f = %.2f\n", x, n, power(x,n));
    return 0;
}