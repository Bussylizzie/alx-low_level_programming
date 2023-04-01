#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - function that adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 * Return: return to pointer or 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int n1_j = 0;
	int n2_j = 0;

	for (i = 0; *(n1 + i); i++)
		n1_j++;
	for (i = 0; *(n2 + i); i++)
		n2_j++;
	if (size_r <= n1_j + 1 || size_r <= n2_j + 1)
	{
		return (0);
	}
	n1 += n1_j - 1;
	n2 += n2_j - 1;
	*(r + size_r) = '\0';
	return (n1, n2, r, --size_r);
}
