#include "main.h"
/**
 * _strlen - a function to return the length of a string
 *@s: strings
 *
 * Return: (0)
 */
int _strlen(char *s)
{
	int total_lngt;

	total_lngt = 0;
	while (s[total_lngt] != '\0')
	{
	total_lngt++;
	}

	return (total_lngt);
}
