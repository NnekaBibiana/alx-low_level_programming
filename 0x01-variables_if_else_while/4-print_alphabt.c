#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always success
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == 'q' || lower == 'e')
		{
			continue;
		}
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
