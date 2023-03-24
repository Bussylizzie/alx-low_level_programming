#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i = 0, j;

while (i <= 10)
{
for (j = 0; j <= 14; ++j)
{
if (j > 0)
{
	_putchar((j / 10) + '0');
	_putchar((i % 10) + '0');
}
}
{
_putchar('\n');
}
}
}
