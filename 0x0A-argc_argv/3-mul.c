#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int result;

		result = _atoi(argv[1]) * _atoi(argv[2]);
		printf("%d|n", result);
	return (0);
	}
	printf("Error\n");
	return (1);
}

