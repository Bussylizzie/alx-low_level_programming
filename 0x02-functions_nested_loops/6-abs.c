#include "main.h"

/**
 * _abs - display the absolute number of an integer
 *@a: the integer to be checked
 * Return: Always 0.
 */
int _abs(int a)
{
	while (a >= 0)
	{
		if (a < 0)
			a = a * -1;
	}
	_putchar(a);
	return (0);
}


