/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
#include <stdio.h>
int main(void)
{
	int a, b;

	for (a = 0; a <= 98; ++a)
	{
		for (b = 1; b <= 99; ++b)
		{
			if (a != b && a < b)
			{
				putchar((a % 10) + '0');
				putchar(' ');
				putchar((b % 10) + '0');
				if (a == 98 && b == 99)
				continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	{
		putchar('\n');
		return (0);
	}
}


