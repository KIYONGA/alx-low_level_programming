int main(void)
{

	int base = 2;
	int exponent = 5;

int result = _pow_recursion(base, exponent);
{

	if (result != -1)
	{
	int temp = result;

	while (temp > 0)
	{
		putchar((temp % 10) + '0');
	temp /= 10;
	}
	putchar('\n');
	}
	else
	{
	char undefinedMessage[] = "Undefined result for negative exponent.\n";
	int i = 0;

	while (undefinedMessage[i] != '\0')
	{
	putchar(undefinedMessage[i]);
		i++;
	}
}

	return (0);
}

