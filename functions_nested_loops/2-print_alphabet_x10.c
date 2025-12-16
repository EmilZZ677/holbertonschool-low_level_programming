#include <stdio.h>
#include "main.h"

/**
* Return:always 0
*/
void print_alphabet(void)
{
	char letter;
	int n;
	
	for (n = 0; n < 10; n++)
	{	
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
	}

}
