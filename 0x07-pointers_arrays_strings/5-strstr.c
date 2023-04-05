#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - function that locates a substring.
 * @haystack: first string
 * @needle: substring
 * Return: to pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	char *p = NULL;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[i] == '\0')
			{
				p = &haystack[i];
			}
			else if (needle[j] != haystack[i + j])
				return (p);
		}
	}
	return (p);
}
