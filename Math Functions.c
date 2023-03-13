#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    double A = sqrt(9);                     // Square Root of any term
    double B = pow(2 , 4);                  // Power Representation of any term
    int C = round(3.14);                    // Rounding off to nearest low integer
    int D = ceil(3.14);                     // Rounding off to nearest high integer
    int E = floor(3.99);                    // Rounding Down to the Nearest Integer
    double F = fabs(-100);                  // Absolute Value i.e. Till the 0, the value would be
    double G = log(3);                      // To Find Logarithm of a Number
    double H = sin(45);                     // To Find Sine of a number

    printf("\n %lf",A);
    printf("\n %lf",B);
    printf("\n %d",C);
    printf("\n %d",D);
    printf("\n %d",E);
    printf("\n %lf",F);
    printf("\n %lf",G);
    printf("\n %lf",H);
    
    return 0;
}