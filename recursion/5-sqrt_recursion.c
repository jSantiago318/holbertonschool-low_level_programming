#include "main.h"

/**
 * _sqrt_helper - helper function to find square root recursively
 * @n: the number
 * @i: the current value being tested
 *
 * Return: the square root of n, or -1 if n doesn't have a natural square root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the natural square root of n, or -1 if n doesn't have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}
