#include "main.h"

/**
 * print_times_table - display time table
 *
 * @n: the number to checked
 */
void print_times_table(int n)
{

	int num, multi, p;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; ++num)
		{
			_putchar('0');
		for (multi = 1; multi <= n; ++multi)
		{
			_putchar(',');
			_putchar(' ');
			p = num * multi;
			if (p <= 99)
			_putchar(' ');
			if (p <= 9)
			_putchar(' ');
			if (p >= 100)
			{
			_putchar((p / 100) + '0');
			_putchar(((p / 10)) % 10 + '0');
			}
			else if (p <= 99 && p >= 10)
			{
			_putchar((p / 10) + '0');
			}
			_putchar((p % 10) + '0');
}
			_putchar('\n');
			}
			}
		}

