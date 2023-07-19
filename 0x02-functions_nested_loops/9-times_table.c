#include "main.h"
/**
 * times_table - Entry point
 *
 * Return: always 0
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	int k = i * j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar (k);
		}
	}
	_putchar ('\n');
}
