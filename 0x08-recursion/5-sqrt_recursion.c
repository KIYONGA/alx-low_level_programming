#include <stdio.h>

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The input number.
 *
 * Return: The natural square root of n, otherwise -1.
 */
int _sqrt_recursion(int n)
{

	if (n < 0 || (n != 1 && n < 4))
	{
		return (-1);

	return (sqrt_recursive(n, 1));
	}
}
