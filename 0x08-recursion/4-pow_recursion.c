#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - function that returns the value of x raised to y
 * @x: integer to raise
 * @y: power of x
 * Return: return value
 */
int _pow_recursion(int x, int y)
{
	if (y < 1)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
