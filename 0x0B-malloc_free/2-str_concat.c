#include "main.h"

/**
 * str_concat - a function that concatinate two string
 * @s1: parameter
 * @s2: parameter
 * Return: NULL upon failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int k;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (k = 0; s1[k] != '\0'; k++)
		len1++;
	for (k = 0; s2[k] != '\0'; k++)
		len2++;
	result = malloc(sizeof(char) * (len1 + len2) + 1);

	if (result == NULL)
		return (NULL);
	for (k = 0; s1[k] != '\0'; k++)
		result[k] = s1[k];
	for  (k = 0; s2[k] != '\0'; k++)
		result[len1 + k] = s2[k];
	return (result);
}
