#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Return: void
 */

void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
