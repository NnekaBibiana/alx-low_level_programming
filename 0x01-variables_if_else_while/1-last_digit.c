#include <stdio.h>
#include <stlib.h>
#include <time.h>

/**
 * main - start the program to print the last digit of the number
 *
 * Return: always 0 (correct answer)
 *
 */

int main(void)
{
	int last, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last > 5)
		printf("last digit of %d is %d and is greater than 5\n" n, last);
	else if (last == 0)
		printf("last digit of %d is %d and is 0\n" n, last);
	else if (last < 6 && last != 0)
		printf("last digit of %d is %d and is less than 6 and not 0\n" n, last);
	return (0);
}
