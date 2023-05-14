// Write a program using the function in C to convert decimal number to
// a. Binary number
// b. Octal number
// c. Hexadecimal number.

#include <stdio.h>

int main() 
{
    long i, rem, dec, bin=0;
    printf("Enter a decimal number: ");
    scanf("%ld", &dec);

    long dec_copy = dec;

    for(i=1; dec_copy > 0; i = i*10)
    {
        rem = dec_copy % 2;
        dec_copy = dec_copy / 2;
        bin = bin + (i*rem);
    }

    printf("Binary: ");
    printf("%ld in binary is %ld\n", dec, bin);

    printf("Octal: ");
    printf("%ld in octal is %o\n", dec, dec);

    printf("Hexadecimal: ");
    printf("%ld in hexadecimal is %X\n", dec, dec);

    return 0;
}