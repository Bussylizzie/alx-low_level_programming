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
	int count = 0;
	int l;

	while (*s != '\0')
	{
		++count;
		++s;
	}
	for (l = count; l >= 0; ++l)
	{
		_putchar(*s);
		--s;
	}
	_putchar('\n');
}
