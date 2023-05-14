#include <stdio.h>
#include <math.h>

int ArmStrong(int n) {
    int sum = 0;
    int temp = n;
    int digits = 0;
    while (temp != 0) 
    
    {
        digits++;
        temp /= 10;
    }

    temp = n;
    while (temp != 0) 
    {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    return n == sum;
}

int Perfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return n == sum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (ArmStrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    if (Perfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}