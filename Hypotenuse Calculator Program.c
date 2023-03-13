#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    double A, B, C;
    printf("\n Enter Side A: ");
    scanf("%lf", &A);

    printf("\n Enter Side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("\n The Hypotenuse Side C is: %lf", C);

    return 0;
}