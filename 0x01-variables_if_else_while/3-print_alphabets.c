#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 when success
 */

int main(void)
{
int lowerCase = 'a';
int upperCase = 'A';
while (lowerCase <= 'z')
{
putchar(lowerCase, upperCase);
lowerCase += 1, upperCase += 1;
}
putchar('\n');
return (0);

}
