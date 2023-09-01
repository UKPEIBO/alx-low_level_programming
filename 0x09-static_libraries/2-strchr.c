#include "main.h"
/**
 * _strchr - main file
 * @t: input
 * @d: input
 * Return: 0
 */
char *_strchr(char *t, char d)
{
	while (*t >= '\0')
	{
		if (*t == d)
		{
			return (t);
		}
		t++;
	}
	return (0);
}
