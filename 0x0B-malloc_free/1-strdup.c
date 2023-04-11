#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string
 * Return: NULL if str is Null, otherwise, to pointer.
 */
char *_strdup(char *str)
{
	int a, b = 0;
	char *str_duplicate;


	{
		if (str == NULL)
		{
			return (NULL);
		}
	{
		for (a = 0; a < b; a++)
	{
		b++;
	}
	str_duplicate = malloc(b++ * sizeof(char));
	if (str_duplicate == NULL)
	{
		return (NULL);
	}
	str[a] = str_duplicate[a];
	str_duplicate[b] = '\0';
	}
}
	return (str_duplicate);
}

