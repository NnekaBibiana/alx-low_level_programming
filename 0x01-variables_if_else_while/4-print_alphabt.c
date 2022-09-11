#include <stdio.h>

/**
 * main - start program that prints letters without q and a
 *
 * Return: answer zero
 *
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
			if (i != 'q' && i != 'e')
				putchar(i );
		}
	putchar('\n');
	return (0);
}

