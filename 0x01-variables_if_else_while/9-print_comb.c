/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	int p;

for (p = 0; p <= 9; ++p)
{
	putchar('0' + p);
}
if (p != 9)
{
	putchar(',');
	putchar(' ');
}
{
	putchar('\n');
return (0);
}
}

