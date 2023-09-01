#include "main.h"
/**
 * *_strcpy - pointer to a character
 *
 * @dest: string 1 pointer to a char
 * @src: string 2 pointer to a char
 * Return: character (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int p;

	for (p = 0; src[p] != '\0'; p++)
	{
		dest[p] = src[p];
	}
	dest[p] = '\0';

	return (dest);
}
