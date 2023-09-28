#include "main.h"

/**
 * square_recursion - a function that returns the natural square root
 * @n: parameter
 * @a: parameter
 * Return: square root or -1
 */

int square_recursion(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	return (square_recursion(n, a + 1));
}
/**
 * _sqrt_recursion - a function that returns natural square root of a  num
 * @n: parameter checked
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	return (square_recursion(n, 0));
}
