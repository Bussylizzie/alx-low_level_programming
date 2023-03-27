#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the length of a string
 * @s: string to check
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; ++s)
		++length;
	return (length);
}

