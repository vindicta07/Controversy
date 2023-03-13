#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    /* Switch -> Switch is a more efficient alternative to using many "Else if" statements
                    allows a value to be tested for equality against many cases.

    */
    
    char grade;

    printf("\n Enter a Grade: ");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("\n Excellent! \n");
            break;
        case 'B':
            printf("\n You Did Great! \n");
            break;
        case 'C':
            printf("\n Satisfactory! \n");
            break;
        case 'D':
            printf("\n Can Do Better! \n");
            break;
        case 'E':
            printf("\n You are Failed in Exams! \n");
            break;
        case 'F':
            printf("\n You are Failed in Exams! \n");
            break;
        default:
        printf("\n Invalid Grade! Try Again! \n");

        return 0;

    }

}