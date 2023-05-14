#include <stdio.h>

int gcd(int a, int b) 
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b) 
{
    return (a * b) / gcd(a, b);
}

int main() 
{
    int a, b;
    printf("Enter Two Numbers:");
    scanf("%d %d", &a, &b);

    printf("The GCD of %d and %d is %d\n", a, b, gcd(a, b));
    printf("The LCM of %d and %d is %d\n", a, b, lcm(a, b));

    return 0;
}
