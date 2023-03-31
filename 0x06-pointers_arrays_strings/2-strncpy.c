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
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		i++;
		dest[i] = src[i];
	}
	while (i < n)
		dest[i] = '\0';
	return (dest);
}
