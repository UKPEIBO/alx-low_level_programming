#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 *
 * @nmemb: no of bloc of memory
 * @size: size of the element (int)
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *q;
	size_t j;

	if (nmemb == 0 || size == 0)
		return (NULL);
	q = malloc(nmemb * size);
	if (q == NULL)
		return (NULL);
	for (j = 0; j < (nmemb * size); j++)
		q[j] = 0;
	return (q);
}
