#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: substring
 * Return: Returns a pointer to the byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *n;

	n = _strpbrk(s, accept);
	{
	if (n != 0)
	{
		return (n);
	}
	else
	{
		n = NULL;
	}
	}
	return (n);
}

