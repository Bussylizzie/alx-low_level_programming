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

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);
		if (i == (n - 1))
		{
			printf("%d, \n", a[n - 1]);
		}
	}
	printf("\n");
}
