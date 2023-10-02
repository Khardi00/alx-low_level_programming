#include <stdio.h>

/**
 * main - a function that prints num of argument
 * @argc: argument oarameter
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
