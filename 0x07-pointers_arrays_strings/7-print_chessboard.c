#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: pointer to chessboard.
 * Return: Void.
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;

	for (; i < 8; i++)
	{
		int j = 0;

		for (; j < 8 ; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
