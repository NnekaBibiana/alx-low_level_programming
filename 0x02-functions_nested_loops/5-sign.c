#include "main.h"
/**
 * print_sign - Entry point
 *
 * @n: character to check
 *
 * Return: always zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	else
	{
		_putchar (45);
		return (-1);
	}
	return (0);
}
