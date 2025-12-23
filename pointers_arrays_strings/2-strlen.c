#include "main.h"

/**
* strlen - function
* @s: parameter
* Return: if all good give 1
*/

int _strlen(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
		len++;
	return (len);
}
