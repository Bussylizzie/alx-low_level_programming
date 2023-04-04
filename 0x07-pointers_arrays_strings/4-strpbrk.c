#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: substring
 * Return: Returns a pointer to the byte or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *n;
	int i;
	int j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n = &s[i];
				break;
			}
			else
			{
				n = NULL;
			}
		}
	}
	return (n);
}

