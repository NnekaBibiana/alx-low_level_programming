#include "main.h"
/**
 * _puts - Entry point
 * @str: parameter
 * Return: Always 0
 */
void _puts(char *str)
{
	int b = 0;

	while (str[b] != '\0')
	{
		_putchar(str[b]);
		b++;

	}
	_putchar ('\n');
}
