/**
 * wildcmp - Compares two strings and checks for equality
 * @s1: The first string to compare
 * @s2: The second string to compare
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else
		return (0);
}

