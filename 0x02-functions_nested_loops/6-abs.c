#include "main.h"
#include <stdlib.h>

/**
 * _abs - display the absolute number of an integer
 *@a: the integer to be checked
 * Return: Always 0.
 */
int _abs(int a)
{
	if (a < 0)
	{
		int abs_value;
	abs_value = a * -1;
	return (abs_value);
	}
	return (a);
}

