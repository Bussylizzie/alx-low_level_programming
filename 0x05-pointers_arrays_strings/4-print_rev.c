#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to check
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int l;

	while (*s != '\0')
	{
		++l;
	}
	for (l -= 1; l >= 0; --l)
	{
		_putchar(s[l]);
	}
	_putchar('\n');
}
