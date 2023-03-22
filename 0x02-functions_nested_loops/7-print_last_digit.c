#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - display last digit of a number
 * @a: the integer to be checked
 * Return: Always 0.
 */
int print_last_digit(int a)

{
	if (a < 0)
	{
		int print_digit;

		print_digit = a * -1;
		return (print_digit);
	}
	return (a);
}

