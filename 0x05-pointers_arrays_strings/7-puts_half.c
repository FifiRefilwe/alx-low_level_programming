#include "main.h"
<<<<<<< HEAD
/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 *
 * @str: this is the input string
 */
void puts_half(char *str)
{
	int full_string, half_string

	full_string = 0;
	while (str[full_string] != '\0')
		full string++;

	half_string = full_string / 2;

	if (full_string % 2 == 1)
		half_string++;

	while (half_string < full_string)
	{
		_putchar(str[half_string]);
		half_string++;
=======

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len, n, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
>>>>>>> 140624265dee72f0a35834e5e3a1c75f4d73f015
	}
	_putchar('\n');
}
