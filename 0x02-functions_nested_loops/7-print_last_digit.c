#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - display last digit of a number
 * @a: the integer to be checked
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	a = a % 10;
	{
		printf("%d%d", a, a);
	}
	return (0);
}

