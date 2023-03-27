#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to check
 * Return: Always 0.
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		++s;
	}
	for ((*s = *s - 1); *s >= 0; --s)
	{
		_putchar(*s);
	}
	{
		_putchar('\n');
	}
}

