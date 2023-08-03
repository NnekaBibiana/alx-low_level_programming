#include "main.h"

/**
 * _strlen_recursion - function to use
 * @s: value to be used
 * Return: Void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + (_strlen_recursion(s + 1)));
	}
	return (0);
}
