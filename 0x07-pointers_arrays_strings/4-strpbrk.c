#include "main.h"
/**
 * _strpbrk - the main function search strings for set of byte
 *
 * @t: string 1
 * @accept: string 2
 *
 * Return: pointer to byte
 */
char *_strpbrk(char *t, char *accept)
{
	char *temp;

	for (; *t != '\0'; t++)
	{
		temp = accept;
		for (; *temp != '\0'; temp++)
		{
			if (*t == *temp)
			{
				return (t);
			}
		}
	}
	return ('\0');
}
