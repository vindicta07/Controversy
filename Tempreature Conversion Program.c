#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>

int main()
{
    char unit;
    float temp;

    printf("\n Is this the Temperature in (Fahrenheit) or (Celcius)");
    scanf("%c", &unit);
    unit = toupper(unit);

    if(unit == 'C')
    {
        printf("\n The Temperature is Currently in Celcius! \n ");
    }

    else if(unit == 'F')
    {
        printf("\n The Temperature is Currently in Fahrenheit! \n ");
    }

    else
    {
        printf("\n %c is not a Valid Unit of Temperature", unit);
    }
    return 0;
}