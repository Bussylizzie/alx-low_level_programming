/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	int i, j;

	for (i = '0'; i <= '8'; ++i)
	{
		for (j = '1'; j <= '9'; ++j)
		{
			if (i != j && i < j)
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
					continue;
		putchar(',');
	putchar(' ');
		}
	}
	}
	return (0);
}

