// clang -Wall -g0 test.c -o main.exe

#include "stdio.h"
#include "conio.h"

#define calc() do { \
	if (i%2 != 0) { \
		for (k=(num-i)/2; k >= 1; k--) \
			printf("\t"); \
		for (j = 1; j <= i; j++) \
			printf("%d\t", i); \
	} \
	printf("\n"); \
} while(0)

int main(void)
{
	int i, j, k;
	int num;

	printf("\n Enter a number to construct a pattern (0-9): ");
	scanf("%d", &num);

	if (num <= 20) {
		if (num%2 == 0)
			num -=1;

		for (i = 0; i <= num; i++)
			calc();
		for (i = num-1; i >= 0; i--)
			calc();
	} else
		printf("invalid entry!\n");

	getch();

	return 0;
}
