#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string to check
 * Return: return length of string
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (s[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}

