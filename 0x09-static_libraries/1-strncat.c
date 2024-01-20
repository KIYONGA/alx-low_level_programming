#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest:The string to be concatenated upon.
 * @src:The string to cocatenated to dest.
 * @n: The maximum number of bytes to be used from src.
 *
 * Return: A pointer o the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int dest_len = 0;
	int i;

	while (*temp != '\0')
	{
		temp++;
		dest_len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i]; src[];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

