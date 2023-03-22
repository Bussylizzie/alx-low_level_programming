#include "main.h"

/**
 * print_to_98 - output data
 *
 * @n: the integer to check
 * Return: Always 0.
 */
void print_to_98(int n)

{
	for (; n <= 98; ++n)
	{
		if (n <= 98 && n == 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			continue;
		}
		else
		{
			_putchar(n);
		}
	}
	{
		for (; n >= 98; --n)
		{
			if (n == 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
			continue;
		}
		else
		{
			_putchar(n);
		}
	}
	}
}

