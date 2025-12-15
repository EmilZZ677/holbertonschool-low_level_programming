#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	char c = '0', e = 'a';

	while (c <= 9 + '0')
	{
		putchar(c);
		c++;
	}
	while (e <= 'f')
	{
		putchar(e);
		e++;
	}

	putchar('\n');

	return (0);
}
