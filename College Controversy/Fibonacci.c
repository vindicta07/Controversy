// WAP to compute Fibonacci series. (No. of elements in the series is user defined)
// Here No of Elements = 6


#include <stdio.h>

int main() 
{
    int n, a = 0, b = 1, c;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; i++) 
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}