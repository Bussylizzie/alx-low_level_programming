#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - function that copies memory area.
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return:  a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (src[i] != '\0')
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	i++;
	dest[i] = '\0';
	}
	return (dest);
}
