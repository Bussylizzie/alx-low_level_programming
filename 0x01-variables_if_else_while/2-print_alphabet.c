/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		char lower = tolower(x);
	putchar(lower);
	}
	return (0);
}

