#include "main.h"


/**
 * int-strlen - returns the length of the string 
 * @s : string
 * Return: length
 */

int _strlen( char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	return (count);
}

