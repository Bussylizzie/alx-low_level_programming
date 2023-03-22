#include "main.h"

/**
 * times_table - display time table times 9
 * Return: Always 0.
 */
void times_table(void)

{
	int i = '0';
	int j, k, l;

	while (i == '0')
	{
		for (j = '0'; j <= '9'; ++j)
		{
			for (k = '0'; k <= '9'; ++k)
			{
				l = j * k;
			}
			_putchar(l);
			_putchar('\n');
		}
	}
}



