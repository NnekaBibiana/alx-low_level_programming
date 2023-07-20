#include "main.h"
/**
 * _isupper - Entry point
 * @c: parameter to be used
 *
 * Return: Always 0
 */
int _isupper(int c)
{
	c = 'A';

	if (c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
