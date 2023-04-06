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

	len = _strlen_recursion(s + 1);
	return (len);
}

