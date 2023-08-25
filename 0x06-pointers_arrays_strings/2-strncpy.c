#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: no of strins to copy
 * Return: return dest char pointer to the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; src[m] != '\0' && m < n; m++)
	{
		dest[m] = src[m];
	}

	for (m = m; m < n; m++)
	{
		dest[m] = '\0';
	}

	return (dest);
}
