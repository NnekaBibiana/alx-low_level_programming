#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char b;
	int c;
	long int d;
	long long int f;
	float g;

	printf("Size of a char:%lubyte(s)\n", (unsigned long)sizeof(b));
	printf("Size of an int: %lubyte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long int: %lubyte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lubyte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
