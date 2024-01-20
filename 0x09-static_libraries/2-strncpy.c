
#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The buffer storing the copied string
 * @src: The source string to be copied
 * @n: The maximum number of bytes to be copied from src
 *
 * Return: A pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

