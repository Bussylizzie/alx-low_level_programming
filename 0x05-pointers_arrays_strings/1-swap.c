#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap integers value
 * @a: first integer
 * @b: second integer
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int swap_int;

	swap_int = *a;
	*a = *b;
	*b = swap_int;
}

