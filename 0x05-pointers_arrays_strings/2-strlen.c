#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: string
 * Return: Length
 */

int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}

