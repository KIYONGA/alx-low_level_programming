#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int longi = 0;
	int i;

	while (s[longi] != '\0')
	{
	longi++;
	}
	longi--;

	for (i = longi; i >= 0; i--)
	{

		putchar(s[i]);
	}
	putchar('\n');
}

