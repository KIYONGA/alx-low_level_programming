#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char password[PASSWORD_LENGTH + 1];
	const char charset[] = "Tada1 Congrats";
	int i;

	srand(time(0));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
	int index = rand() % 62;

	password[i] = charset[index];

	}

	password[PASSWORD_LENGTH] = '\0';

	printf("Generated Password: %s\n", password);

	return (0);
}

