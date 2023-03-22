#include "main.h"

/**
 * times_table - display time table times 9
 * Return: Always 0.
 */
void times_table(void)

{
	int i, j, k, p;

	i = '0';

		while (i < 11)
		{
			for (j = 0; j <= 9; ++j)
			{
				for (k = 0; k <= 9; ++k)
					p = j * k;
						_putchar(p + '0');
				_putchar('\n');
			}
		}
}

