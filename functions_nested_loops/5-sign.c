#include "main.h"

/**
* print_sign - Allahu Akbar
* @c: ubeqay samir
* Return: 2-3 years dagestan and always 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
