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

	while (*dest != '\0')
		++dest;
	while (*src != '\0')
		++src;
	*dest = *src;
	*dest = '\0';
	return (dest);
}
