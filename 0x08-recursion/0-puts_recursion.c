#include <stdio.h>

/**
 * _puts_recursion: -prints a string followed by a new line.
 * @s:The string to be printed.
 *
 * Return: returns a new line
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
			return;
	}
	else
	{
		putchar(*s);
			_puts_reursion(s + 1);
	}
	_puts_recursion(s + 1);
}
int main()
{
	char *s = "Hello, stanley";
		_puts_recursion(s);
		return (0);
}
