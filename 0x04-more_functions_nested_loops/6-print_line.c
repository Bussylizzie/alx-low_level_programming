#include "main.h"

/**
 * print_line - draws a straight line
 * @n: tge variable to check
 * Return: Always 0.
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		++n;
	}
	{
	if (n <= 0)
	{
		_putchar('\n');
	}
	}
	_putchar('\n');
}
