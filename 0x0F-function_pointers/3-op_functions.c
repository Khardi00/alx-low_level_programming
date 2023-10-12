#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - a function to sum two numbers
 * @a: parameter
 * @b: parameter
 * Return: the sum of two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - a function that subtract two numbers
 * @a: parameter
 * @b: parameter
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - a function that multiply two numbers
 * @a: parameter
 * @b: parameter
 * Return: the product of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - a function that divide two numbers
 * @a: parameter
 * @b: parameter
 * Return: a product that divide two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - a function that gives the remainder of the division of num
 * @a: parameter
 * @b: parameter
 * Return: the remainder of the division of two num
 */
int op_mod(int a, int b)
{
	return (a % b);
}
