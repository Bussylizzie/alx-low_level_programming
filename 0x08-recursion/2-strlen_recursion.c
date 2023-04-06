#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to check
 * Return: return length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len = _strlen_recursion(s);
	}
	return (len);
}

