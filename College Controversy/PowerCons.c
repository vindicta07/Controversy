// An Electric Power distribution company charges its domestic consumer as follows:
//      Consumption Units                               Rate of Charge
//          0-200               0.50 per unit
//          201-400             Rs. 100 plus Rs. 0.65 per unit excess of 200
//          401-600             Rs. 230 plus Rs. 0.85 per unit excess of 400
//          601-above           Rs. 390 plus Rs. 1.00 per unit excess of 600

// Program should read the units consumed for a customer and calculate the total bill.
// Use Switch Case



#include<stdio.h>

int main()
{
  int n;
  start:
  printf("Enter Power Consumption: ");
  scanf("%d", &n);

  int cost;
  
    if(n>=0)
    {
  switch(n)
    {
      case 0 ... 200:
                    cost = n*0.5;
                    break;

      case 201 ... 400:
                    cost = 100 + 0.65*(n-200);
                    break;

      case 401 ... 600:
                    cost = 230 + 0.85*(n-400);
                    break;

      default:
                    cost = 390 + (n-600);
                    break;
      
    }

    printf("Total Cost = %d", cost);
    }
    else 
        {
            printf("Invalid Input! Please Try Again! \n ");
            goto start;
        }
    return 0;
}