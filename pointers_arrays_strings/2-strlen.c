#include "main.h"

/**
*
*
*
*/

int _strlen(char *s)
{
	int len = 0, i = 0;

	while (s[i++])
		len++;
	return (len);
}
