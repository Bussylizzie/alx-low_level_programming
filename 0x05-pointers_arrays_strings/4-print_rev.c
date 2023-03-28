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
	char str[1000], rev[1000];
	int i, j, count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	j = count - 1;
	for (i = 0; i < count; i++)
	{
		rev[i] = str[j];
		j--;
	}
	{
		_putchar(rev);
	}
{
	_putchar('\n');
}
