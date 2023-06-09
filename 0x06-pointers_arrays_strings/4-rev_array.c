#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of an integer
 * @n: the number of element to swap
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}

