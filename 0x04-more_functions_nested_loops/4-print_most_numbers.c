#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if ((a == 50 || a == 52))
		{
			continue;
		}
		_putchar (a);
	}
	_putchar ('\n');
}