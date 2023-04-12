#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int a, b = 0, c = 0;
	char *conc;

	for (a = 0; a++;)
		b++;
	if ((s1 == NULL) || (s2 == NULL))
	{
		s1 = "";
		s2 = "";
	}
	conc = malloc(b * sizeof(char));
	if (conc == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1[a]; a++)
	{
		c++;
		conc[c] = s1[a];
	}
	for (a = 0; s2[a]; a++)
	{
		c++;
		conc[c] = s2[a];
	}

		return (conc);
}
