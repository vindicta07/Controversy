#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>

int main()
{
    char unit;
    float temp;

    printf("\n Is this the Temperature in (Fahrenheit) or (Celcius): ");
    scanf("%c", &unit);
    unit = toupper(unit);

    if(unit == 'C')
    {
        printf("\n The Temperature is Currently in Celcius! \n ");
        printf("\n Enter Temperature in Celsius: ");
        scanf("%f", &temp);
        
        temp = (temp * 9 / 5) + 32;
        printf("\n The Temperature in Fahrenheit is: %.1f ",temp);

    }

    else if(unit == 'F')
    {
        printf("\n The Temperature is Currently in Fahrenheit! \n ");
        printf("\n Enter Temperature in Fahrenheit: ");
        scanf("%f", &temp);

        temp = ((temp - 32)*5)/9;
        printf("\n The Temperature in Celsius is: %.1f",temp);
    
    }

    else
    {
        printf("\n %c is not a Valid Unit of Temperature", unit);
    }
    return 0;
}
