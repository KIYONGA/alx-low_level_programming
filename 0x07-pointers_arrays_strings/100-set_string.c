#include <stdlib.h>
#include <string.h>

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: A pointer to a pointer to a char.
 * @to: A pointer to a char that will be the new value.
 */
void set_string(char **s, char *to)
{
	char *new_string;
	int i, len;

	if (*s != NULL)
		free(*s);

	len = 0;
	while (to[len])
		len++;

	new_string = malloc(sizeof(char) * (len + 1));
	if (new_string == NULL)
		exit(1);

	for (i = 0; i <= len; i++)
		new_string[i] = to[i];

	*s = new_string;
}

