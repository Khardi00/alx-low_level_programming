#include "main.h"

/**
 * cap_string - a function that capitalize all word of a string
 * @n: parameter checked
 * Return: 0
 */

char *cap_string(char *n)
{
	int count = 0;

	while (n[count])
	{
		while (!(n[count] >= 'a' && n[count] <= 'z'))
			count++;
		if (n[count - 1] == ' ' ||
				n[count - 1] == '\t' ||
				n[count - 1] == '\n' ||
				n[count - 1] == ',' ||
				n[count - 1] == ';' ||
				n[count - 1] == '.' ||
				n[count - 1] == '!' ||
				n[count - 1] == '?' ||
				n[count - 1] == '"' ||
				n[count - 1] == '(' ||
				n[count - 1] == ')' ||
				n[count - 1] == '{' ||
				n[count - 1] == '}' ||
				count == 0)
				n[count] -= 32;
		count++;
	}
return (n);
}
