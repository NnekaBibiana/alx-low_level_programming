#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if not two arguments
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int result;

		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d|n", result);
	return (0);
	}
	printf("Error\n");
	return (1);
}

