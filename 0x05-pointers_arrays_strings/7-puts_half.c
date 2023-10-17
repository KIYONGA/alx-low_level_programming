#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: input string
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int n = (length - 1) / 2;
	int i;

	if (length % 2 == 0)
	{
		for (i = n; i < length; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = n + 1; i < length; i++)
	{
			putchar(str[i]);
		}
	}
	putchar('\n');
}

