#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: integer to check
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; ++ i)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
