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

	while (i < n && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}
