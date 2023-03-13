#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    const double pi = 3.14159;
    double rad;
    double circum;
    double area;

    
    printf("Enter Radius = ");
    scanf("%lf", &rad);
    
    circum = 2*pi*rad;
    
    printf("\n The Circumference of the Circle is = %lf ", circum);

    area = pi * rad * rad;

    printf("\n The Area of the Circle is: %lf", area);

    return 0;

}