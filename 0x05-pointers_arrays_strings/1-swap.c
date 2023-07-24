#include "main.h"
/**
 *wap_int - Swaping data
 * @a: first parameter
 * @b:econd parameter
 * Return: Always void
 */
voidwap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
