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
	char *s = str;

	while (*s != '\0')
	{
		++k;
		++s;
	}
	for (o = 0; o < k; o += 2)
	{
		_putchar(str[o]);
	}
	_putchar('\n');
}
