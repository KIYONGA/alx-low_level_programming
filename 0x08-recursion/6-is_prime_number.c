#include <stdio.h>

/**
 * is_prime_number - Check if an integer is a prime number.
 * @n: The input integer to be checked.
 *
 * Return: 1 if the integer is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{

	if (n <= 1)
		return (0);

	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - Helper function for recursive prime check.
 * @n: The input integer.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if the integer is a prime number, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{

	if (divisor * divisor > n)
	{
		return (1);
	}


	if (n % divisor == 0)
	{
		return (0);
	}


	return (is_prime_recursive(n, divisor + 1));
}

