#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: print int
 * Return: Always o
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{

	int i;
	int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < 1)
					_putchar (' ');
			}
			_putchar ('\n');

		}

	}
}
