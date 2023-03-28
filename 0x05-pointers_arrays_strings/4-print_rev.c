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
	char rev = s[0];

	while (*s != '\0')
	{
		++count;
		++s;
	}
	for (l = 0; l < count; --l)
	{
		--count;
		rev = s[l];
		s[l] = s[count];
		s[count] = rev;
	}
	{
		_putchar(rev);
	}
	_putchar('\n');
}
