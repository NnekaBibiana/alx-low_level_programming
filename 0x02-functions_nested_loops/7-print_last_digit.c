#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @c: character
 * Return: always 0
 */
int print_last_digit(int c)
{
	int j = c % 10;
	
	if (j < 0)
	{
		j = j * -1;
	}
	_putchar (j + '0');

	return(j);
}
