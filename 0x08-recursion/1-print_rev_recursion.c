#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string to print in reverse
 * Return: return with value
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_print_rev_recursion(s + 1);
		puts(s);
	}
}

