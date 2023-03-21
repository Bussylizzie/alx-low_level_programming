#include "main.h"
#include<stdio.h>

/**
 * print_alphabet_x10 - display alphabets ten times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char b;
int a;

for (a = 1; a <= 10; ++a)
{
putchar('\n');
{
for (b = 'a'; b <= 'z'; ++b)
{
_putchar(b);
}
}
if (a == 10)
printf("\n");
}
}
