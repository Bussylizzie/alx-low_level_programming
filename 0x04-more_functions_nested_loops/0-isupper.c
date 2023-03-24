#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the variable to check
 * Return: 1 for uppercase, 0, otherwise
 */

int _isupper(int c)
{

if (c == 65 && c <= 90)
{
	return (1);
	++c;
}
else
{
	return (0);
}
}

