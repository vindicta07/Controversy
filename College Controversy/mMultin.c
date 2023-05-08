// WAP to read two integers m and n and to decide and print whether m is a multiple of n using if else.

#include<stdio.h>

int main()
{
    int m,n;
    printf("Enter Values of m and n: ");
    scanf("%d %d", &m, &n);

    if (n%m == 0)
    {
        printf("%d is a Multiple of %d", m, n);
    }

    else
    {
        printf("%d is not a Multiple of %d", m, n);
    }

    return 0;
    
}