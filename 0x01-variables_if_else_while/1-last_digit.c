#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return - Always success
 */
int main(void)
{
	int n;
	int p = n%10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (p > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", p);
	}
	else if (p < 6 && p != 0)
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", p);
	}
	else 
	{
		printf("Last digit of n is %d and is 0\n", p);
	}
	return (0);
}
