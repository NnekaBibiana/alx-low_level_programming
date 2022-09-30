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
	int Result, num1, num2;

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
       
        Result = _atoi(argv[1]) * _atoi(argv[2]);
	{

	printf("%d\n", Result);
	}

	return (0);
}

