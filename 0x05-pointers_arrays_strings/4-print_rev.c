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
	char rev = s[0];
	int i, count = 0;

	while (s[count] != '\0')
	{
		++count;
	}
	for (i = 0; i < count; ++i)
	{
		--count;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
	{
		_putchar(rev);
	}
{
	_putchar('\n');
}
}
