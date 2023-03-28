#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character of a string
 * @str: string
 * Return: Always 0.
 */
void puts2(char *str)
{
	int o;
	int k = 0;
	int l = 0;
	char *s = str;

	while (*s != '\0')
	{
		++s;
		++l;
	}
	k = l - 1;
	for (o = 0; o <= k; ++o)
	{
		if (o % 2 == 0)
		{
			_putchar(s[o]);
		}
	}
	_putchar('\n');
}
