#include <stdio.h>
/**
 * _print_rev_recursion: prints the string in reverse.
 * @s: The string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		putchar (*s);
	}
}
int main(void)
{
	char str[] = "Hello,world";
		_print_rev_recursion(str);
		return (0);
}

