#include "main.h"
#include "stdlib.h"
/**
 * _strdup - return a pointer to a newly allocated
 * space in memory also duplicate the string it holds
 * to the new space
 *
 * @str: initial input string
 *
 * Return: pointer to the memory allocated
 * which is an array of characters
 */
char *_strdup(char *str)
{
	size_t j, k;
	char *strdout;

	if (str == NULL)
	{
		return (NULL);
	}

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}

	strdout = (char *)malloc(sizeof(char) * (j + 1));

	if (strdout == NULL)
	{
		return (NULL);
	}

	for (k = 0; k <= j; k++)
	{
		strdout[k] = str[k];
	}
	return (strdout);


}
