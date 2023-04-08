#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function that determine prime no
 * @n: integer
 * Return: return 1 for prime no or 0, otherwise
 */
int is_prime_number(int n)
{
	if ((n != 1) && ((n % 2 == 1) || (n % 3 == 1) || (n % 5 == 1)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
