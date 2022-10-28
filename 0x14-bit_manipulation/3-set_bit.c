#include "main.h"

/**
 * set_bit - sets the value of a bit at a given  index
 * @n: a pointer to the bit
 * @index: The index to set the valie at
 * Return: if an error occurs return -1
 * otherwise return 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);

	return (-1);
}
