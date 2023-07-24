#include "main.h"
/**
 * _strlen - Entry point
 * @s: pointer to be used
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
