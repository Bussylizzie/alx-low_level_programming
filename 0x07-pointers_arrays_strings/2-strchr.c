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
	int k;
	char *p;

	for (; s[k] != '\0'; k++)
	{
		if (s[k] == c)
		{
			p = &s[k];
		}
		else if (s[k] != c)
		{
			p = NULL;
		}
	}
	return (p);
}
