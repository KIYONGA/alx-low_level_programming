#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: Pointers to the memory area to be filled
 * @b: Constant bytes to be filled
 * @n: Number of bytes to be filled
 *
 * Return: pointer to the memmory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)

	{
		s[i] = b;
	}
	return (s);
}
