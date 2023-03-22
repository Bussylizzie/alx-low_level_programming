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
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			break;
		}
		else
		{
			_putchar(n + '0');
		}
	}
	{
		for (; n >= 98; --n)
		{
			if (n == 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			break;
		}
		else
		{
			_putchar(n + '0');
		}
	}
	}
}

