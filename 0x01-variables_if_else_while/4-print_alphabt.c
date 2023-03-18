/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	char x;

	for (x = 'a' <= 'z'; x != 'q', 'e'; ++x)
	{
		putchar(x);
	}
	{
		putchar('\n');
	}
	return (0);
}

