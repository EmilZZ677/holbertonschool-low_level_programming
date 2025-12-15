#include <stdio.h>
 /**
  * main- entry point
  * Return: always 0
  */
int main(void)
{
	char c = '0';

	while (c <= 15 + '0')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
 
