#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: always 0
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 4; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; k++)
				{
					_putchar (i + '0');
					_putchar (j + '0');
					_putchar (58);
					_putchar (l + '0');
					_putchar (k + '0');
					_putchar ('\n');
				}
			}
		}
	}
}
