#include "main.h"
/**
 * _puts - a function that  prints string followed by new line to stdout
 *
 * @str: prints string
 */
void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
