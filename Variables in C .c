#include<stdio.h>
int main()
{
    // Variable = Allocated space in memory to store a value.
    //            We refer to a variable's name to access the stored value.
    //            That Variable now behaves as if it was the value it contains.
    //            But we need to declare what type of data we are storing.
    //            It is basically done with declaration + initialization.

    int x;                                              // Declaration
    x = 123;                                            // Initialization
    int y = 321;                                        // Declaration + Initialization

    int age = 21;                                       // Integer
    float gpa = 3.05;                                   // Floating Point Number
    char grade = 'C';                                   // Single Character
    char name[] = "Krunal";                             // Array of Characters

    printf("Hello %s \n",name);                         // Format Specifier. Here %s means string insertion.
    printf("\nYou are %d years old ",age);              // Format Specifier. Here %d means decimal insertion.
    printf("\n Your Average Grade is %c ",grade);       // Format Specifier. Here %c means character insertion.
    printf("\n Your GPA is %f\n",gpa);                  // Format Specifier. Here %f means float insertion.

    return 0;
}