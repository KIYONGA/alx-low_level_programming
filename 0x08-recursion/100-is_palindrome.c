#include <stdio.h>

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{

	if (*s == '\0')
		return (1);

	return (is_palindrome_recursive(s, 0, strlen(s) - 1));
}

/**
 * is_palindrome_recursive - Helper function for recursive palindrome check.
 * @s: The input string.
 * @start: The starting index for comparison.
 * @end: The ending index for comparison.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);


	if (s[start] != s[end])
		return (0);


	return (is_palindrome_recursive(s, start + 1, end - 1));
}

