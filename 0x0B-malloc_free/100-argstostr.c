#include "main.h"

/**
 * argstostr - a function that concatenates argument of a function
 * @ac: parameter
 * @av: parameter
 * Return:  NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	int k, l, m = 0;
	int len = 0;
	char *result;

	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l] != '\0'; l++)
			len++;
		len++;
	}
	result = malloc(sizeof(char) * len + 1);
	if (result == NULL)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (l = 0; av[k][l] != '\0'; l++)
		{
			result[m] = av[k][l];
			m++;
		}
		result[m++] = '\n';
	}
	result[m] = '\0';
	return (result);
}
