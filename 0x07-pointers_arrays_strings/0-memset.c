#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer
 * @b: character
 * @n: unsigned integer
 * Return: return to pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ss = s;

	for (i = 0; i < n; i++)
		b = i;
	ss = _memset(ss + i, b, i);
	return (ss);
}
