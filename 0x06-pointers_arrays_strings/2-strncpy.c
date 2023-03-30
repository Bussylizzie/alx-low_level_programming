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
	for (n = 0; dest[n]; n++)
		dest[n] = src[n];
	src[n] = '\0';
	return (src);
}
