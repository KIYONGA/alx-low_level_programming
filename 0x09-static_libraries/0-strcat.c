#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The string to be concatenated upon.
 * @src: The string to be concatenated to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}

	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}

	*temp = '\0';
	return (dest);
}

