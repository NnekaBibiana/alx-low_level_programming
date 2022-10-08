#include <stdio.h>

/**
 * main - prints smallest two digit combination
 *
 * Return: Always 0
 */

int main(void)
{
	char i;
	char j;

	for (i = '0'; i < '9'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (i >= j)
			{
				continue;
			}
			putchar(i);
			putchar(j);

			if (i < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
