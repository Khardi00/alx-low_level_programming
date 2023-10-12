#include "function_pointers.h"

/**
 * int_index - function to search for an integer
 * @array: parameter array
 * @size: parameter size
 * @cmp: parameter compare
 * Return: if no element match, return -1, if size <= 0 then -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]) != 0)
			return (k);
	}
	return (-1);
}
