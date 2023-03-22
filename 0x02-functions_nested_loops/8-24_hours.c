#include "main.h"

/**
 * jack_bauer - print 24 hours
 *
 * Return: Always 0.
 */
void jack_bauer(void)

{
	int a, j, k, l;

	for (a = 0; a <= 2; ++a)
	{
		for (j = 0; j <= 3; ++j)
		{
			for (k = 0; k <= 5; ++k)
			{
				for (l = 0; l <= 9; ++l)
				{
					_putchar(a + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}


