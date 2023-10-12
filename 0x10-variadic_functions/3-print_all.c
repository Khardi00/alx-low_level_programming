#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: parameter
 * Return: 0
 */


void print_all(const char * const format, ...)
{
	int k = 0;
	char *str, *diff = "";

	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[k])
		{
			switch (format[k])
			{
				case 'c':
					printf("%s%c", diff, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", diff, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", diff, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", diff, str);
					break;
				default:
					k++;
					continue;
			}
			diff = ", ";
			k++;
		}
	}
}
