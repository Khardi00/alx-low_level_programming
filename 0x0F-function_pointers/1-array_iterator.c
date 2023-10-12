#include "function_pointers.h"

/**
 * array_iterator - a function that iterate through an array
 * @array: target array
 * @size: array size
 * @action: function pointer to array
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
		return;
	for (k = 0; k < size; k++)
	{
		action(*array);
		array++;
	}
}
