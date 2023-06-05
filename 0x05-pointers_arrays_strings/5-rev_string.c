#include "main.h"

/**
<<<<<<< HEAD
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

=======
 * rev_string - reverses a string
 * @s: Input string
 * Return: String in reverse
 */
>>>>>>> 140624265dee72f0a35834e5e3a1c75f4d73f015
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
<<<<<<< HEAD
	for i = 0; (i < counter; i++)
	{
		counter==;
=======
	for (i = 0; i < counter; i++)
	{
		counter--;
>>>>>>> 140624265dee72f0a35834e5e3a1c75f4d73f015
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
