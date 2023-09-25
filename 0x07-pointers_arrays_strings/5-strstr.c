#include "main.h"

/**
 * _strstr - a funtion that locatesa substring
 * @haystack: parameter checked
 * @needle: parameter checked
 * Return: a pointer that locatesa substring or null
 */

char *_strstr(char *haystack, char *needle)
{
	int num;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		num = 0;
		if (haystack[num] == needle[num])
		{
			do {
				if (needle[num + 1] == '\0')
					return (haystack);
				num++;
			} while (haystack[num] == needle[num]);
		}
		haystack++;
	}
	return ('\0');
}
