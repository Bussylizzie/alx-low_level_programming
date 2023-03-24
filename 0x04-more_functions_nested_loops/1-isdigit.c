#include "main.h"

/**
 * _isdigit - check for numbers between 0 and 9
 * @c: the variable to be checked
 * Return: 1 for digit, 0, otherwise
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
