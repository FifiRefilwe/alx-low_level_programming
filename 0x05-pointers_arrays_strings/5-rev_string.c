#include "main.h"

/**
 * rev_string - reverses a string
 * @s: String to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, lenl;
	
	len = 0;
	lenl = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	lenl = - 1;
		
	for (i = 0; i < len / 2; i++)
	{

		tmp = s[i];
		s[i] = s[lenl];
		s[lenl--] = tmp;
	}
}
