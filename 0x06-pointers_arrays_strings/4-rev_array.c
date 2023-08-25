#include "main.h"
/**
 * reverse_array - a function that reverse an array
 *
 * @a: pointer to an array
 * @n: number of element in an array
 *
 * Return: void
 */
void reverse_array(int *a, int k)
{
	int m = 0, temp;

	k = k - 1;

	for (m = 0; m < k; m++)
	{
		temp = a[m];
		a[m] = a[k];
		a[k] = temp;
		k--;
	}
}
