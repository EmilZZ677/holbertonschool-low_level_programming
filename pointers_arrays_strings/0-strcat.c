#include "main.h"

/**
 * _strcat - append to dest
 * @dest: destination
 * @src: source
 *
 * Return: returns pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (dest[len] != '\0')
		len++;
	while (dest[len] == src[i])
	{
		len++;
		i++;
	}
	return (dest);
}
