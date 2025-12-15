#include <stdio.h>

/**
 * main-alphabet
 * Return:if successful 0
 */
int main(void)
{
	char c = '0';

	while (c <= 9 + '0')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

