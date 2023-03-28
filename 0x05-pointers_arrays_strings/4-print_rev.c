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
		++s;
	}
	for (l = 0; l < count; --l)
	{
		--count;
		--s;
		{
			_putchar(*s);
		}
	}
		{
			_putchar('\n');
		}
}
