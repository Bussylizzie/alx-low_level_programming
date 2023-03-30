#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: integer
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j <= n)
	{
		dest[i] = src[j];
	j++;
	i++;
	}
	dest[i] = '\0';
	return (dest);
}
