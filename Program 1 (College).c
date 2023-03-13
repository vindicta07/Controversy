//                                  кяυиαl pαтнαк




/*      Question :- Write a Program to Find Gross Salary of an Employee
        Accept Basic Salary from User:- DA(Dearest Allowance = 50%)
        HRA (House Rental Allowance = 30%) and TA (Travel Allowance = 20%)

*/


/*      Input Specifications:- To Compute the Gross Salary of an Employee 
                where the Basic Salary is Entered by the User where DA,
                TA and HRA is Given.
*/

/*      Output Specifications:- To Display the Gross Salary
*/

/*      Special Processing :- Take Basic Pay(tot) as a variable
                              For DA,       a = tot * 0.5
                              For HRA,      b = tot * 0.3
                              For TA,       c = tot * 0.2
                              For Gross,    d = a + b + c + tot
*/

/*      Algorithm (Pseudo Code):-
                                    1. Start
                                    2. Read tot from the user
                                    3. Input tot, a, b, c, d
                                    4. Calculate a = tot * 0.5
                                                 b = tot * 0.3
                                                 c = tot * 0.2
                                                 d = a + b + c + tot
                                    5. Print d
                                    6. End

*/

/*      Program Code:               */
#include<stdio.h>
#include<conio.h>

int main()
{
    int tot, a, b, c, d;
    
    printf("Enter Total Income: ");
    scanf("%d", &tot);

    a = tot * 0.5;
    b = tot * 0.3;
    c = tot * 0.2;
    d = a + b + c + tot;

    printf("\n Dearest Allowance (DA) is: %d",a);
    printf("\n House Rental Allowance (HRA) is: %d",b);
    printf("\n Travel Allowance (TA) is: %d",c);
    printf("\n Gross Total Income is: %d",d);

    return 0;
}


    // Program Written by YASH PATHAK FE-EXTC-B 516