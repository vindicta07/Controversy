#include<stdio.h>
#include<conio.h>
#include<string.h>              // The use of this string is advanced part of C Programming! This will be taught afterwards

int main()
{
    char name[30];          // Bytes
    int age;

    printf("\n What is your Name?");
    // scanf("%s", &name);
    fgets(name, 30, stdin);                 // Using this we can ignore wide Spaces
    name[strlen(name)-1] = '\0';            // It is a command input of suspend getting new line after the String.

    printf("How Old are you?");
    scanf("%d", &age);

    printf("\n Hello %s, How are you?", name);
    printf("\n You are %d years old!", age);
    printf("\n %s, How may I help you in Learning C Programming?", name);

    return 0;

}