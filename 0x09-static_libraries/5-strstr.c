#include "main.h"
/**
 * _strstr - function finds the first occurrence of a
 * substring in a string
 * @needle: substring
 * @haystack: string
 *
 * Return: char pointer to haystack from the subset found
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *m = haystack;
		char *q = needle;

		while (*m == *q && *q != '\0')
		{
			m++;
			q++;
		}

		if (*q == '\0')
			return (haystack);
	}
	return (0);
}
