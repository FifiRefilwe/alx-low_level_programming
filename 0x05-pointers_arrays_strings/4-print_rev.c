#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
<<<<<<< HEAD
	s--;
=======
	s++;
>>>>>>> 2cd7e6b0bdd276cd938ba11344c82f451979512f
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
<<<<<<< HEAD
=======

>>>>>>> 2cd7e6b0bdd276cd938ba11344c82f451979512f
	_putchar('\n');
}
