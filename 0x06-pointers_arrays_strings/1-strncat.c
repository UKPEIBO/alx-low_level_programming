#include "main.h"
/**
 * _strncat - a function that concertenate two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: no of element to concertenate from src
 * Return: dest + n of src
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, k;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{

	}

	for (k = 0; src[k] != 0 && k < n; k++)
	{
		dest[len_dest + k] = src[k];
	}
}
