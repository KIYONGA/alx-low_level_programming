#include <stdio.h>

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}

int main(void) 
{
	int num = 5;
	int result = factorial(num);

	if (result == -1)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar(':');
		putchar(' ');
		putchar('I');
		putchar('n');
		putchar('v');
		putchar('a');
		putchar('l');
		putchar('i');
		putchar('d');
		putchar(' ');
		putchar('i');
		putchar('n');
		putchar('p');
		putchar('u');
		putchar('t');
		putchar('\n');
	}
	else
	{
		putchar('F');
		putchar('a');
		putchar('c');
		putchar('t');
		putchar('o');
		putchar('r');
		putchar('i');
		putchar('a');
		putchar('l');
		putchar(' ');
		putchar('o');
		putchar('f');
		putchar(' ');
		putchar(num / 10 + '0');
		putchar(num % 10 + '0');
		putchar(' ');
		putchar('i');
		putchar('s');
		putchar(' ');
		putchar(result / 10000 + '0');
		putchar(result / 1000 % 10 + '0');
		putchar(result / 100 % 10 + '0');
		putchar(result / 10 % 10 + '0');
		putchar(result % 10 + '0');
		putchar('\n');
	}

	return (0);
}

