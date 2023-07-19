#include "main.h"
/**
 * _islower - Entry point
 *
 * @c: parameter
 *
 * Return: success or failure
 */

int _islower(int c)
{

	for (c = 65; c <= 122; c++)
	{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}

