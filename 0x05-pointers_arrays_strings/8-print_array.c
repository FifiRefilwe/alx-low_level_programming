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
}
