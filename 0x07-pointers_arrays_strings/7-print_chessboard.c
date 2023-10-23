#include <string.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * of integers.
 * @a: Pointer to the first element of the matrix.
 * @size: Size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, sum_diag1 = 0, sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += *(a + i * size + i);
		sum_diag2 += *(a + i * size + (size - 1 - i));
	}

	char buffer[100];

	sprintf(buffer, "Sum of the first diagonal: %d\n", sum_diag1);
	write(1, buffer, strlen(buffer));


	sprintf(buffer, "Sum of the second diagonal: %d\n", sum_diag2);
	write(1, buffer, strlen(buffer));
}

