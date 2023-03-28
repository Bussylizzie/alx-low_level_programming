#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that convert a string to an integer
 * @s: string
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int i = 1;
	unsigned int n = 0;

	while (++*s)
	{
	if (*s == '-')
	i  *= -1;
	else if (*s >= '0' && *s <= '9')
	n = (n * 10) + (*s - '0');
	else if (n > 0)
	break;
	}
return (n * i);
}

