/*
        Format Specifiers % -> Defines and formats a type of data to be displayed.
        %c = Character
        %s = string (Array of Characters)
        %f = Float
        %lf = Double
        %d = Integer
        %.1 = Decimal Precision
        %1 = Minimum Field Width
        %- = Left Align
*/
#include<stdio.h>
#include<stdbool.h>

int main()
{
    // float item1 = 5.75;
    // float item2 = 10.00;
    // float item3 = 100.99;
    

    // printf("Item 1: ₹%f\n", item1);
    // printf("Item 1: ₹%.2f\n", item1);
    // printf("Item 2: ₹%8.2f\n", item2);
    // printf("Item 3: ₹%-8.2f\n", item3);


    /*
        // Constant -> Fixed Value that cannot be altered by the program during its execution
    */

    // float pi = 3.14159;

    // printf("%f\n",pi);

    /*
        // Arithmetic Operators
        // + (Addition)
        // - (Subtraction)
        // * (Multiplication)
        // / (Division)
        // % (Modulus)
        // ++ (Increment)
        // -- (Decrement)
    */

    int x = 10;
    // int y = 6;
    // int z = x + y;
    // float w = x / (float)y;
    // int v = x % y;

    // printf("%d\n",z);
    // printf("%f\n",w);
    // printf("%d\n",v);

    

    /*
        augmented assignment operators = Used to Replace a statement
                                         Where an Operator takes a variable as one of its arguments
                                         and then assigns the result back to the same variable.
                                         x = x + 1;
                                         x+ = 1;
                                         Here we can use Arithmetic Operators.
    */

    x = x + 2;
    printf("%d\n",x);
    return 0;

    
}