#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @a: square matrix of which we print the sum of diagonals
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;

	int sum, sum1;

	sum = 0;
	sum1 = 0;

	i = 0;
	while (i < size)
	{
		sum = sum + *(a + i * size + i);
		sum1 = sum1 + *(a + i * size + size - i - 1);

		i++;
	}

	printf("%i, %i\n", sum, sum1);
}
