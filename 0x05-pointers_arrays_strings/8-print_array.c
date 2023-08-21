#include "main.h"
#include <stdio.h>
/**
 * print_array - print number of an array
 *
 * @a: pointer to an int
 * @n: no of array
 *
 * Return: void
 *
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);

	if (c != (n - 1))
	{
		printf(", ");
	}
	}
	printf("\n");
}
