#include <stdio.h>

/**
 * main - using the function putchar
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);

	for (i = 'a'; i <= 'z'; i++)
	putchar('\n');
	return (0);
}
