#include <stdio.h>
/**
 * main - Entry point
 *
 * return - Always success
 */
int main(void)
{
	char lower='a';
	for (lower='a'; lower <='z'; lower++)
	{
		putchar(lower);
		putchar('\n');
	}
	return (0);
}
