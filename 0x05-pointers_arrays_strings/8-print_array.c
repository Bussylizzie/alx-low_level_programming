#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: first array
 * @n: seconf array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	i = n - 1;

	for (i = 0; i < n; ++i)

	if (n == 1)
		printf("%d", a[i]);
	if (n > 1)
		printf(", %d", a[i]);
}
