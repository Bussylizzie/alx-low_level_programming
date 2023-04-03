#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: character
 * Return: Returns a pointer or NULL
 */
char *_strchr(char *s, char c)
{
	char *k;

	k = _strchr(s, c);

	if (k != 0)
	{
		return (k);
	}
	else
	{
		return (NULL);
	}
}
