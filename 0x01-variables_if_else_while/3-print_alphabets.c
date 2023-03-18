/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	char x, y;

	for (x = 'a'; x <= 'z'; ++x)
		putchar(x);
	putchar('\n');
	for (y = 'A'; y <= 'Z'; ++y)
		putchar(y);
	return (0);
}


