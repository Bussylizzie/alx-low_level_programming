#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - change integer parameter by pointer
 * @n: pointer
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int k = 10;

	n = &k;
	{
		printf("%d\n", k);
	}
	*n = 98;
	{
		printf("%d\n", k);
	}
}

