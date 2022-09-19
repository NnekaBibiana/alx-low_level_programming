#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: an integer of 48
 * @b: an integer of 94
 * Return: zero
 */

void swap_int(int *a, int *b)
{
	int c = (*a + *b);
	*a = (c - *a);
	*b = (c - *b);
}

