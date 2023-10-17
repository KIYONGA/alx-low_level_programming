#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 */
void rev_string(char *s)
{
	char rev_s[1000];
	int counter = 0;
	int i = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	counter--;

	while (counter >= 0)
	{
		rev_s[i] = s[counter];
		counter--;
		i++;
	}
	rev_s[i] = '\0';

	i = 0;
	while (rev_s[i] != '\0')
	{
		s[i] = rev_s[i];
		i++;
	}
}

