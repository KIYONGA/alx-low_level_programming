#include <stdio.h>
/**
 * wildcmp: compares two strings.
 * @s1: the string to be compared.
 * @s2:the string to be compared.
 *
 */
int main(void)
{
	char *s1[] = "Hello";
	char *s2[] = "H *lo";
	char *s3[] = "H*llo";
	char *s4[] = "Hi*lo";

	printResult(wildcmp(s1, s2));
	printResult(wildcmp(s1, s3));
	printResult(wildcmp(s1, s4));

	return (0);
}
if (*s1 == *s2)
{
	return (1);
}
if (*s1 != *s2)
{
	return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}

