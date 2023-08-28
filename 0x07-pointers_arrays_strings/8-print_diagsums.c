#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 *
 * @b: 2d array of int type
 * @size: size of the array (square)
 *
 * Return: nothing (void)
 */
void print_diagsums(int *b, int size)
{
	int j, sum1 = 0, sum2 = 0;

	for (j = 0; j < size; j++)
	{
		sum1 += b[j];
		sum2 += b[size - j - 1];
		b += size;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
