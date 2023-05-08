// Write a Program in C to show the following Output:
//      0
//     01
//    010
//   0101
//  01010


#include <stdio.h>

int main() 
{
    int r, c;
    for (r = 1; r <= 5; r++) 
    {
        for (c = 1; c <= 5; c++) 
        {
            if (c <= 5 - r) 
            {
                printf(" ");
            } 
                
            else 
            {
                printf("%d", (r + c) % 2);
            }
        }
        printf("\n");
    }
    return 0;
}
