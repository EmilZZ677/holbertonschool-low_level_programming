#include "main.h"

/**
 * _puts - function
 * @str: parameter
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
