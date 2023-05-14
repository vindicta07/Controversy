// Write a program in C to find the sum of the series 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5..... using two function. (Take
// the length of the series as user input)

#include<stdio.h>

double sumOfSeries(int n) 
{
    double sum = 0;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        sum += (double)fact / i;
    }
    return sum;
}

int main() 
{
    int n;
    printf("Enter the length of the series: ");
    scanf("%d", &n);
    double result = sumOfSeries(n);
    printf("The sum of the series is: %.2lf\n", result);
    return 0;
}