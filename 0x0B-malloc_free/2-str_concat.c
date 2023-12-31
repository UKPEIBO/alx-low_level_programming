#include "main.h"
#include "stdlib.h"
/**
 * str_concat - concertenate two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the conc... string
 * which memory was allocated for.
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, j, k;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (j = 0; j < len1; j++)
	{
		ptr[j] = s1[j];
	}
	for (k = 0; k <= len2; k++)
	{
		ptr[j] = s2[k];
		j++;
	}
	return (ptr);
}
