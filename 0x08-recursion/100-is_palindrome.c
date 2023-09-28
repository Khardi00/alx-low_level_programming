#include "main.h"

/**
 * is_palindrome - a function that returns one if a string is palindrome
 * @s: parameter to reverse
 * Return: 1 0r 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (string_check(s, 0, string_len(s)));
}
/**
 * string_len - a function that returns hthe length of a string
 * @s: parameter
 * Return: length of a string
 */

int string_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + string_len(s + 1));
}
/**
 * string_check - a function that checks for palindrome
 * @s: parameter
 * @a: itarator parameter
 * @len: lenght parameter
 * Return: 0 or 1
 */

int string_check(char *s, int a, int len)
{
	if (*(s + a) != *(s + len - 1))
		return (0);
	if (a >= len)
		return (1);
	return (string_check(s, a + 1, len - 1));
}
