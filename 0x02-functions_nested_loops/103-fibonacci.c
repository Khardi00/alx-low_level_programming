#include <stdio.h>

/**
 * main - a program that finds and prints the even-valued term
 * Return: 0
 */

int main(void)
{
	int limit = 4000000;
	int num1 = 1;
	int num2 = 2;
	int numx;
	int sum = 2;

	while (numx <= limit)
	{
		numx = num1 + num2;
		if (numx % 2 == 0)
			sum = sum + numx;
		num1 = num2;
		num2 = numx;
	}
	printf("%d\n", sum);
	return (0);
}
