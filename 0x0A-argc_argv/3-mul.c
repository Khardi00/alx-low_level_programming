#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function that mutiplies your numbers
 * @argc: argument
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int number1, number2, answer = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		number1 = atoi(argv[1]);
		number2 = atoi(argv[2]);

		answer = number1 * number2;
		printf("%d\n", answer);
	}
	return (0);
}
