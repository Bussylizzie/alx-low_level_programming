#include "main.h"

/**
 * int _islower - decides if alphabet is in lowercase
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c == 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

