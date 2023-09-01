#include "main.h"
/**
 * _puts - print string followed by new line
 *
 * @str: prints string
 */
void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
