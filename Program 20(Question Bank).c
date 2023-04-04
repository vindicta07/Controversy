#include<stdio.h>

int main()
{
    int n;
    long long int product = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        product = product * i;                  // Or we can write here product *= i;
    }

    printf("Product = %lld", product);

    return 0;
}
