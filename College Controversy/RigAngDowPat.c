// Given an integer no. WAP that displays the number as follows: (Number is user defined)
// First line : all digits
// Second line: all except 1st digit
// Third line: all except first two digits and so on.
// Example: If the no is 5678
// 5 6 7 8
// 6 7 8
// 7 8
// 8



#include <stdio.h>
#include <string.h>

int main() 
{
    char num[100];
    printf("Enter a number: ");
    scanf("%s", num);

    int len = strlen(num);

    for (int r = 0; r < len; r++) 
    {
        for (int c = r; c < len; c++) 
        {
            printf("%c ", num[c]);
        }
        printf("\n");
    }

    return 0;
}