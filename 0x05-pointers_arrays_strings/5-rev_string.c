#include "main.h"

/**
 * rev_string - afunction that writes string backwards
 * @s: parameter checked
 * Return: 0
 */

void rev_string(char *s)
{
	int string;
	int lenght = 0;

	for (string = 0; s[string] != '\0'; string++)
		lenght++;
	for (string = 0; string < lenght / 2; string++)
	{
	char string1;
		string1 = s[string];
		s[string] = s[lenght - 1 - string];
		s[lenght - 1 - string] = string1;
	}
}

