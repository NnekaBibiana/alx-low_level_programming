#include "main.h"
/**
 * swap_int - Swaping data
 * @a: first parameter
 * @b:econd parameter
 * Return: Always void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
