#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always success
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i >= j)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
