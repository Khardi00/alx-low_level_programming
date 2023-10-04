#include "main.h"

/**
 * _strdup - a function that copies string to newly  allocated space
 * @str: parameter
 * Return: pointer to new memory
 */

char *_strdup(char *str)
{
	int k;
	char *c;
	int len = 0;

	if (str == NULL)
		return (NULL);
	for (k = 0; str[k] != '\0'; k++)
		len++;
	c = malloc(sizeof(char) * len + 1);

	if (c == NULL)
		return (NULL);
	for (k = 0; str[k] != '\0'; k++)
		c[k] = str[k];
	return (c);
}
