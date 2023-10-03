#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - a function that  adds positive number of integers
 * @argc: argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k, l;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (k = 1; k < argc; k++)
		{
			for (l = 0; argv[k][l] != '\0'; l++)
			{
				if (!(isdigit(argv[k][l])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[k]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
