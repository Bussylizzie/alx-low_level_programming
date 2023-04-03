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
	int i = 0; /** int for string length */
	int k = 0; /** int to checked for first */
		     /** occurence of c in s string */
	char *p; /** pointer */

		for (k = 0; s[k] != '\0'; k++)
			i++;
	for (k = 0; k < i; k++)
	{
		if (s[k] == c)
		{
			p = &s[k];
			break;
		}
		else if (c == '\0')
		{
			p = NULL;
			break;
		}
		else
		{
			p = NULL;
		}
	}
	return (p);
}
