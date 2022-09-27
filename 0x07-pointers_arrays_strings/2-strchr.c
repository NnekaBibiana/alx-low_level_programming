#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: the pointer to the first occurence of the character c
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{

			return (s);
		}
		++s;
	}
	if (*s ==c)
	{
		return (s);
	}

	return (0);
}
