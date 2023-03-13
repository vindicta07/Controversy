#include<stdio.h>
#include<stdbool.h>

int main()
{
    char a = 'C';                       // Single Character         %c
    char b[] = "Krunal";                // Array of Characters      %s

    float c = 3.141592;                 // 4 Bytes (32 Bits of Precision) 6-7 digits %f
    double d = 3.141592653589793;       // 8 Bytes (64 Bits of Precision) 15-16 digits %lf

    bool e = true;                      // 1 Byte (True or False) %d
    char f = 100;                       // 1 Byte (-128 to 127) %d or %c
    unsigned char g = 255;              // 1 Byte (0 to 255) %d or %c

    short int h = 32767;                // 2 Bytes (-32768 to 32767) %d
    unsigned short int i = 65535;       // 2 Bytes (0 to 65535) %d

    int j = 2147483647;                 // 4 Bytes (-2,147,483,648 to 2,147,483,647) %d
    unsigned int k = 4294967295;        // 4 Bytes (0 to 4,294,967,295) %u

    long long int l = 922337203685477580;      // 8 Bytes (-9 Quintillion to +9 Quintillion) %lld
    unsigned long long int m =  18446744073709551615U;           // 8 Bytes (0 to +18 Quintillion) %llu

    printf("%c\n",a);               // Single Character Output
    printf("%s\n",b);               // Array of Characters
    printf("%f\n",c);               // Float
    printf("%lf\n",d);              // Double
    printf("%d\n",e);               // Boolean Expression
    printf("%d\n",f);               // Character as Numerical Value
    printf("%d\n",g);               // Unsigned Character as Numeric Value
    printf("%d\n",h);               // Short
    printf("%d\n",i);               // Unsigned Short
    printf("%d\n",j);               // int
    printf("%u\n",k);               // unsigned int
    printf("%lld\n",l);             // Long Long int
    printf("%llu",m);               // Unsigned long long int

    return 0;
}

// Since there are some values which exceed the limit, don't take any tension, its just written for reference.
