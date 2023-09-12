#include <stdio.h>

/**
 * main - to print the mutiple of 3 and 5
 * Return: 0
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + 1;
	}

	printf("%d\n", sum);
	return (0);
}
