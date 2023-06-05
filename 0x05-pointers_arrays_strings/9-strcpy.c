#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
<<<<<<< HEAD
 * @dest: char type string
 * @src: char typer string
 * Description: copy the string pointed to by pointer 'src' to
 * the buffer pointed to by 'dest'
 * Return: pointer to 'dest'
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
=======
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
>>>>>>> 140624265dee72f0a35834e5e3a1c75f4d73f015

	return (dest);
}
