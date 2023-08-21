#include "main.h"
/**
 * print_rev - print a string in reverse
 *
 * @s: the string input to be reversed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}

	for (c--; c >= 0; c--)
	_putchar(s[c]);
	_putchar('\n');
}
