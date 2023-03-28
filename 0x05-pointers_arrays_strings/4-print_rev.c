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
	int count = 0;

	while (*s != '\0')
	{
		++count;
	}
	for (l = count; l > 0; --l)
	{
		_putchar(*(s + l));
		--s;
	}
	_putchar('\n');
}
