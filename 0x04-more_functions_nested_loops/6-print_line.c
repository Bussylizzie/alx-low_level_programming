#include "main.h"

/**
 * print_line - draws a straight line
 * @n: tge variable to check
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; ++n)
{
_putchar('_');
}
_putchar('\n');
}
}
