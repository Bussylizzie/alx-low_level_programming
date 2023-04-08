#include "main.h"
#include <stdio.h>

/**
 * wildcmp - function that compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns 1 if identical, 0, otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (s1 == s2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
