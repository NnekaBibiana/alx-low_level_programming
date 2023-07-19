#include "main.h"

/**
 * _abs - Entry point
 *
 * @i: character
 * Return: Always 0
 */

int _abs(int i)
{
	if (i < 0)
	{
		int abs;

	abs = (-1) * i;

	return (abs);
	}
	return (i);
}
