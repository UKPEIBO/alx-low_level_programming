#include "main.h"
/**
 * print_chessboard - a function that prints chessboard
 *
 * @b: array of array
 * Return: nothing
 */
void print_chessboard(char (*b)[8])
{
	int j, k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			_putchar(b[j][k]);
		}
		_putchar('\n');
	}
}
