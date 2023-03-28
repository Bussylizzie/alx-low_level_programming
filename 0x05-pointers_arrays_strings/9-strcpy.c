#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: first string
 * @src: second string
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int k = 0;

	while (*(src + 1) != '\0')
	{
		++i;
	}
	for (; k < i; ++k)
	{
		dest[k] = src[k];
	}
	dest[i] = '\0';
	return (dest);
}

