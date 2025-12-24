#include "main.h"

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char temp;

	while (s[j] != '\0')
		j++;

	j--;

	while (i < 3)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = s[i];

		i++;
		j++;
	}
}
