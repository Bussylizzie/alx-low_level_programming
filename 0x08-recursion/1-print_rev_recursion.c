#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string to print in reverse
 * Return: return with value
 */
void _print_rev_recursion(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		s--;
	}
		puts(s);
}

