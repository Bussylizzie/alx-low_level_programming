#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - display last digit of a number
 * @a: the integer to be checked
 * Return: Always 0.
 */
int print_last_digit(int a)

{
	int last_digit;

	last_digit = a % 10;
	if (a < 10)
{
	a = a * -1;
}
{
	_putchar(last_digit + '0');
}
return (last_digit);
}

