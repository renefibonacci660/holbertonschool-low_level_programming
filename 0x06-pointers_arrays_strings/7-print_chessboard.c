#include "holberton.h"
/**
 * print_chessboard - prints a representation of a chess board with letters
 * @a: the board assigned in 7-main.c
**/
void print_chessboard(char (*a)[8])
{
	unsigned int b;
	unsigned int c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
