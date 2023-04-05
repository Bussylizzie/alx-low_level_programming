#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: array
 * @size: memory of array
 * Return: Always 0;
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < size; i++)
		diag1 = diag1 + a[i];
	{
		if (i == (size - 1))
		{
			diag2 = diag2 + a[i];
		}
		{
			printf("%d, %d\n", diag1, diag2);
		}
	}
}
