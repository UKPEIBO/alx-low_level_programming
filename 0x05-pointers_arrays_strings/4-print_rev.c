#include "main.h"
/**
 * print_rev - a function that print a string in reverse followed by a \n
 *
 * @s: the string input
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int k;

	k = 0;
	while (s[k] != '\0')
	{
		k++;
	}

	for (k--; k >= 0; k--)
	_putchar(s[k]);
	_putchar('\n');
}
