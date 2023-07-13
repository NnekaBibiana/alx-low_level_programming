#include <stdio.h>
/**
 * Main - Entry point
 *
 * Return - Always 0
 */
int main(void)
{
	char b;
	int c;
	long int d;
	long long int f;
	float g;

	printf("Size of a char:%c\n", sizeof(b));
	printf("Size of a int: %i\n", sizeof(c));
	printf("Size of a long int: %ld\n", sizeof(d));
	printf("Size of a long long int: %lld\n", sizeof(f));
	printf("Size of a float: %f\n", sizeof(g));
	return (0);
}
