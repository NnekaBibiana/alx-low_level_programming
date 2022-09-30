#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * main - adds positive number
 * @argv: number of arguments
 * @argc: array of arguments
 * Return: 1 or 0
 *
 */

int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j + 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
