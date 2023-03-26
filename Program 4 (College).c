#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, x, y;
    printf("Enter Value of a: ");
    scanf("%d", &a);
    
    printf("Enter Value of b: ");
    scanf("%d", &b);

    x = ++a;
    y = --b;

    printf("Value of a after Increment is: %.1d and Value of b after Decrement is: %.1d", x, y);

    return 0;
}