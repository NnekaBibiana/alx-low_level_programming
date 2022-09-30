#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - first function
 * @argc: number of argv
 * @argv: array of argc
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		putchar(count);
	return (0);
}
