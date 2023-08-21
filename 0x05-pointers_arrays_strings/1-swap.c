#include "main.h"
/**
 * swap_int - this function swaps the value of  two integers
 *
 * @a: the first pointer to swap
 * @b: the second pointer to swap
 * Return: (0)
 */
void swap_int(int *a, int *b)
{
	int emp;
	int *w = &emp;

	*w = *a;
	*a = *b;
	*b = *w;
}
