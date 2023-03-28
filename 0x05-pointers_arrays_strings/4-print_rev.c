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
	int p;

	while (*s != '\0')
	{
		++count;
		++s;
	}
	--s;
	for (p = count; p >= 0; --p)
	{
		_putchar(*s);
		--s;
	}
	{
	_putchar('\n');
	}
}
