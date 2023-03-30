#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{

	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i] = src[j];
		}
	dest[i] = '\0';
	return (dest);
}
