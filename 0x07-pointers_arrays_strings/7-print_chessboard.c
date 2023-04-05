#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - function that prints the chessboard.
 * @a: array
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int c;
	int b;

	for (c = 0; c < 7; c++)
		for (b = 0; b < 8; b++)
		{
			_putchar(a[c][b]);
		}
	_putchar('\0');
}


