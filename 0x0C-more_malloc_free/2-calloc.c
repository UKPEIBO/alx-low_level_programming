#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate two strings while
 * second string is an o value
 *
 * @t1: string one
 * @t2: string two
 * @o: no of element to concatenate from t2
 *
 * Return: poimnter to the new allocated memory
 */
char *string_nconcat(char *t1, char *t2, unsigned int o)
{
	size_t j, k, l;
	char *t;

	if (t1 == NULL)
		j = 0;
	else
	{
		for (j = 0; t1[j] != '\0'; j++)
			;
	}

	if (t2 == NULL)
		k = 0;
	else
	{
		for (k = 0; t2[k] != '\0'; k++)
			;
	}
	if (k > o)
		k = o;
	t = malloc(sizeof(char) * (j + k + 1));
	if (t == NULL)
		return (NULL);
	for (l = 0; l < j; l++)
		t[l] = t1[l];
	for (l = 0; l < k; l++)
		t[l + j] = t2[l];
	t[j + k] = '\0';
	return (t);
}
