#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: character parameter
 * @s2: character parameter
 * @n: paramter int
 * Return: if function fails, return null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (k = 0; s1[k] != '\0'; k++)
		s1len++;
	for (k = 0; s2[k] != '\0'; k++)
		s2len++;
	result = malloc(sizeof(char) * (s1len + n) + 1);
	if (result == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (k = 0; s1[k] != '\0'; k++)
			result[k] = s1[k];
		for (k = 0; s2[k] != '\0'; k++)
			result[s1len + k] = s2[k];
		result[s1len + k] = '\0';
	}
	else
	{
		for (k = 0; s1[k] != '\0'; k++)
			result[k] = s1[k];
		for (k = 0; k < n; k++)
			result[s1len + k] = s2[k];
		result[s1len + k] = '\0';
	}
	return (result);
}
