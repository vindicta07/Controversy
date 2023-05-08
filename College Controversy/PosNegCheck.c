// Write a program to check if a given number is positive or negative

#include<stdio.h>

int main()
{
    int i;
    printf("\n Enter Your Number: ");
    scanf("%d", &i);

    if(i>0)
    {
        printf("\n The Given Number is Positive!");
    }

    else if(i<0)
    {
         printf("\n The Given Number is Negative!");
    }

    else
    {
         printf("\n The Given Number is Zero!");
    }

    return 0;
}