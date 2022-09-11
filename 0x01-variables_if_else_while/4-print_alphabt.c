#include <stdio.h>

/**
 * main - start program that prints letters without q and a
 *
 * Return: anser zero
 *
 */

int main(void)
{
	char p;
		for (p = 'a'; p <= 'z'; p++)
		{
		if (p != 'q' && p != 'e')
			putchar(p);
		}
	putchar("\n");
	return (0);
}

