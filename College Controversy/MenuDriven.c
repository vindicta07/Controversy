// Write a menu driven program to read three values and print the following results
// a) Sum of the values
// b) Average of the three values
// c) Largest of the three
// d) Smallest of the three

#include<stdio.h>

int main()
{
    int a, b, c;
    int i;

    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&a, &b, &c);

    printf("\n Menu Driven Program. Choose any One Option: ");
    printf("\n 1. Sum of the Values.");
    printf("\n 2. Average of the three values.");
    printf("\n 3. Largest of Three Numbers.");
    printf("\n 4. Smallest of Three Numbers.");
    printf("\n Enter Your Choice: ");
    scanf("%d", &i);


    switch(i)
        {
        case 1: 
                    i=a+b+c;
                    printf("Sum of the Values of Three Numbers Provided is: %d",i);
                    break;

        case 2:
                    i=(a+b+c)/3;
                    printf("Average of Three Numbers Provided is : %d",i);
                    break;

        case 3:
                    i = (a > b)? ((a > c)? a : c) : ((b > c)? b : c);
                    printf("Largest of Three Numbers Provided is : %d",i);
                    break;

        case 4:
                    i = (a < b)? ((a < c)? a : c) : ((b < c)? b : c);
                    printf("Smallest of the Three Numbers Provided is : %d",i);
                    break;

        default: printf("Wrong Option! Try Again!");
        }

    return 0;
}