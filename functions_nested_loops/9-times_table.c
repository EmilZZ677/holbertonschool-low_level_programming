#include "main.h"

/**
* times_table - prints 9 times table starts from 0
*/
void times_table(void)
{
	int i, result;

	for (i = 0; i <= 9; i++)
	{
		result = i * 9;
		
		if (result < 10)
		{
			_putchar('0' + result);
		}
		else
		{
			_putchar('0' + result / 10);
			_putchar('0' + result % 10);
		}
		
		_putchar('\n');
	}
}
