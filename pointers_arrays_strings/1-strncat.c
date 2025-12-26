#include "main.h"

/**
 * _strcat - append to dest
 * @dest: destination
 * @src: source
 * @n: integer
 *
 * Return: returns pointer to dest
 */

char *_strncat(char *dest, char *src, int n);
{
	int i = o, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return dest;
}
