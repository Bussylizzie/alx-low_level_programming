#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string.
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while ((dest[i] = src[i]) != '\0' && i < n)
	{
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	i++;
	}
	return (dest);
}

