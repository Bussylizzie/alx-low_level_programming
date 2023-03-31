#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @j: string pointer
 *
 * Return: Always 0.
 */
char *string_toupper(char *j)
{
	int i;

	while (j[i] != '\0')
	{
		if (i == 'a' && i <= 'z')
			j[i] -= 32;
		i++;
	}
	return (j);
}

