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
		write(1, "\n", 1);
			return;
	}
	write(1, s, 1);

	_puts_recursion(s + 1);
}
