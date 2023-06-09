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

	for (i = 0; i < n; i++) /** i represents numbers of n bytes*/
	       /** copied from memory area*/
	{
		dest[i] = src[i];
	}
	return (dest);
}
