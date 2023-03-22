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

		if (a < 0)
		{
			a = a * (-1);
	}
		{
		printf("%d%d\n", a, a);
		}
return (0);
}

