#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int l = 0;
	int k;

	while (*str != '\0')
	{
		++l;
		++str;
	}
	if (l % 2 == 1)
	{
		k = (l - 1) / 2;
		k += 1;
	}
	else
	{
		k = l / 2;
	}
	for (; k < l; ++k)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
