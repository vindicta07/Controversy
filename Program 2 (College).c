#include<stdio.h>
#include<math.h>

int main()
{
    int a, y, m, r, d;
    printf("\n Enter No. of Days: ");
    scanf("%d", &a);

    y = a / 365;
    r = a % 365;
    m = r / 30;
    d = r % 30;

    printf("\n Number of Years: %d", y);
    printf("\n Number of Months: %d", m);
    printf("\n Number of Days: %d", d);

    return 0;

}