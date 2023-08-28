#include "main.h"
/**
 * _memset - a function that fills a memory with a constant byte
 *
 * @s: pointer to the no of memory byte
 * @b: a byte constant
 * @n: no of byte of the memory
 *
 * Return: pointer t
 */
char *_memset(char *t, char c, unsigned int o)
{
	int j;

	for (j = 0; o > 0; j++)
	{
		t[j] = c;
		o--;
	}

	return (t);
}
