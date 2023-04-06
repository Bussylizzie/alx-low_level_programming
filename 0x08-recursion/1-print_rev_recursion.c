#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string to print in reverse
 * Return: return with value
 */
void _print_rev_recursion(char *s)
{

	while (*s != '\0')
	{
		s--;
	}
	puts(s);
}

