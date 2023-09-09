#include <stdio.h>

/**
 * main - to print function using puchar
 * Return: always o
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}

	putchar('\n');
	return (0);
}
