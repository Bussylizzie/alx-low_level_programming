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

	for (i = 0; i <= (n - 1); ++i)
	{
		printf("%d, ", a[i]);
		if (i == (n - 1))
		{
			putchar((a[n - 1]) + '0');
			printf(",");
			putchar(' ');
		}
	}
	printf("\n");
}
