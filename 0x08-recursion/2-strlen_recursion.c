#include <stdio.h>
/**
 * _strlen_recursion: gives the length of the string.
 * @s: the string.
 *
 * return: returns the length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '0' ||  *s == NULL)
	{
		return (strlen);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
int main(void)
{
	char str[] = "Hello, Bibian!";
	int length = _strlen_recursion(str);

	return (0);
}

