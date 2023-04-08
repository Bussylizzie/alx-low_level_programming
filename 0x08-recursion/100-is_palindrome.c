#include "main.h"
#include <stdio.h>

/**
 * is_palindrome -  function that determine  if a string is a palindrome
 * @s: string
 * Return: returns 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int l = 0;

	if (s[l] != '\0')
	{
		l++;
	}
	if (s[l] > 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
