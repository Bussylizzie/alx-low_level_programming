#include "main.h"

/**
 * print_sign - display signs of a number
 * @n: character to be checked
 *
 * Return: 1 for positive and greater than, 0 for zero, -1 for negative and lower than zero
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('-');
		return (-1);
	}
}

