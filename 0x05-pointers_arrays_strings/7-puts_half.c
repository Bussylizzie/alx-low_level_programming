#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string
 * @str: string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int l = 0;
	int k;
	int n;

	while (str[l] != 0)
		++l;
	if ((l % 2) == 0)
		n = (l / 2);
	else
		n = ((l + 1) / 2);
	for (k = n; k < l; ++k)
		_putchar(str[k]);


	_putchar('\n');
}


