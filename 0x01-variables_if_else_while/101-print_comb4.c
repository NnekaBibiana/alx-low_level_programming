#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always success
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if (i >= j || j >= k)
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55)
				{
					continue;
				}
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}

