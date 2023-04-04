#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string 1
 * @accept: substring
 * Return: numbrr of bytes in intial segment of string s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int n;
	int j = 0;

		for (j = 0; accept[j] >= '\0'; j++)
			n++;
		{
			for (i = 0; i >= n; i++)
		{
			if (s[n] == accept[j])
			{
				n++;
				i++;
				break;
			}
			else if (accept[j] == '\0')
			{
				i = 0;
				break;
			}
			else if (accept[j] != '\0')
			{
				i++;
			}
		}
		}
	return (i);
}
