#include <stdio.h>

/**
 * main - a program that prints and finds the first 98 fibonacci
 * Return: 0
 */

int main(void)
{
	unsigned long int num1 = 1;
	unsigned long int num2 = 2;
	unsigned long int numx;
	int i;

	while (i < 98)
	{
		numx = num1 + num2;
		num1 = num2;
		num2 = numx;
		printf("%lu", numx);

		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
