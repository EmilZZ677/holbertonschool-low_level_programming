#include "main.h"

/**
 * puts2: prints every other character of a string
 * @str: the string to print from
 * Prints every other character of the string, starting with the first,
 * followed by a new line.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
