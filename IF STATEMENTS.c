#include<stdio.h>
#include<conio.h>

int main()
{
    int age;

    printf("\n Enter Your Age = ");
    scanf("%d", &age);

    if(age > 17)
    {
        printf("You can apply for Credit Card!");
    }

    else if(age > 0)
    {
        printf("You are too Young to have a Credit Card!");
    }

    else if(age < 0)
    {
        printf("You are not even born yet!");
    }

    else
    {
        printf("You can't have a Credit Card; You were just born!");
    }


    return 0;
}