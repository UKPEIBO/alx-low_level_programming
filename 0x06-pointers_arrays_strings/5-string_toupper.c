#include "main.h"
/**
 * string_toupper - converts a string to upper case
 *
 * @str: the string input to be converted
 *
 * Return: modified string
 */
char *string_toupper(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - 32;
		}
	}
	return (str);
}
