#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main - to input the last digit of the output
* Return: numbeir
*/

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, p;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	p = n % 10;
	if (p > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, p);
	}
	else if (p < 6 && p != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, p);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, p);
	}

	return (0);
}
