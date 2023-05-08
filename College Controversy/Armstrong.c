// Write a Program to find whether a given number is Armstrong or not using do-while loop

// A number is Armstrong Number if it is equal the sum of cube of its digits.
// For Ex: 153 is an Armstrong number because (1)^3 + (5)^3 + (3)^3 = 1 + 125 + 27 = 153


#include<stdio.h>  

int main()    
{    
  int n,r,sum=0,temp;    
  printf("Enter the Number = ");    
  scanf("%d",&n);    
  temp = n;
  
  do    
  {    
    r=n%10;    
    sum=sum+(r*r*r);    
    n=n/10;    
  }
    while(n>0);
  
  if(temp==sum)    
  {
    printf("The Number Provided is a Armstrong Number! \n");    
  }
  else
  {
    printf("The Number Provided is Not a Armstrong Number!\n "); 
  }
  return 0;  
}  