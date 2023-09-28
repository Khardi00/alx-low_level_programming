#include "main.h"

/**
 * prime_num - a function that returns 1 if the input integer is a prime num
 * @n: parameter
 * @a: parameter
 * Return: 0 or 1
 */

int prime_num(int n, int a)
{
	if (n <= 1 || (n != a && n % a == 0))
	{
		return (0);
	}
	else if (n == a)
	{
		return (1);
	}
	return (prime_num(n, a + 1));
}
/**
 * is_prime_number - a function that returns 1 if input integer is a prime num
 * @n: parameter checked
 * Return: 0 0r 1
 */

int is_prime_number(int n)
{
	return (prime_num(n, 2));
}
