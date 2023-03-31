#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string.
 * @j: string pointer
 *
 * Return: return string
 */
char *cap_string(char *j)
{
	int i;

	i = 0;
	while (!(j[i] >= 'a' && j[i] <= 'z'))
	{
		if (j[i - 1] == ' ' ||
			j[i - 1] == '\t' ||
			j[i - 1] == '\n' ||
			j[i - 1] == ',' ||
			j[i - 1] == ';' ||
			j[i - 1] == '.' ||
			j[i - 1] == '!' ||
			j[i - 1] == '?' ||
			j[i - 1] == '"' ||
			j[i - 1] == '(' ||
			j[i - 1] == ')' ||
			j[i - 1] == '{' ||
			j[i - 1] == '}' ||
			i == 0)
		j[i] -= 32;
	i++;
	}
	return (j);
}
