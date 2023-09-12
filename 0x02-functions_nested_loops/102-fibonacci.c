#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int numx;
	int i;

	print("%lu, ", num1);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", num2);
		numx = num1 + num2;
		num1 = num2;
		num2 = numx;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
