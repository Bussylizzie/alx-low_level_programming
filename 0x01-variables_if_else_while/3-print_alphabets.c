/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	char x;;

	for (x = 'a'; x <= 'z'; ++x)
	for (x = 'A'; x <= 'Z'; ++x)
		putchar(x);
		putchar('\n');
	return (0);
}


