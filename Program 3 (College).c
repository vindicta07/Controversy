#include<stdio.h>
#include<math.h>

int main()
{
    int num1, num2, num3, max;
    printf("Enter Three Numbers:");
    scanf("%d, %d, %d",&num1,&num2,&num3);

    max = (num1 > num2)? ((num1 > num3)? num1 : num3) : ((num2 > num3)? num2 : num3);

    printf("\n The Greatest of the Three Numbers is: %d", max);

    return 0;
}