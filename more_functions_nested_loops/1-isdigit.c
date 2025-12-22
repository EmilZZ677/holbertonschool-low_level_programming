#include "main.h"

/**
 * _isdigit - returnt if c is digit
* Return: if all good and healthy it gives us 1
* @c: parametrler
*/

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}
