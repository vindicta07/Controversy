#include<stdio.h>
#include<math.h>

int main()
{

    
    int grade;

    printf("\n Enter a Percentage: ");
    scanf("%d", &grade);

    if(grade>= 91 && grade<=100)
    {
       printf("You Got 'O' Grade!");
    } 
    else if(grade>=81 && grade<=90)
    {  
        printf("You Got 'A' Grade!");
    }
    else if(grade>=71 && grade<=80)
    {
        printf("You Got 'B' Grade!");
    }
    else if(grade>=61 && grade<=70)
      printf("You Got 'C' Grade!");

    else if(grade>=51 && grade<=60)
    {
      printf("You Got 'D' Grade!");
    }
      
    else if(grade>=41 && grade<=50)
    {
      printf("You Got 'E' Grade!");
    }
    else if(grade>=0 && grade<=40)
    {
      printf("You Got 'F' Grade!");
    }
    else
    {
      printf(" Invalid Input! Try Again!");
    }

  return 0;
}
