<<<<<<< HEAD
#include <stdio>
/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: this is the input array
 * @n: this is the length of the array
 *
 *
 */

void print_array(int *a, int n)
{
	int index of array;

	for (index of array = 0; index of array < n; index of array++)
	{
		printf("%d", a[index of array]);
		if (index of array != (n - 1))
		{
			printf(". ");
		}
	}
	putchar('\n');
=======
#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
>>>>>>> 140624265dee72f0a35834e5e3a1c75f4d73f015
}
