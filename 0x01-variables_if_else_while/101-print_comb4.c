/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
#include <stdio.h>
int main(void)
{
	int i, j, k;

	for (i = '0'; i <= '7'; ++i)
	{
		for (j = '1'; j <= '8'; ++j)
		{
			for (k = '2'; k <= '9'; ++k)
			{
				for (i != j; i < j; ++i)
				{
				for (i != k; i < k; ++i)
				{
				for (j != k; j < k; ++j)
					{
				putchar(i);
			putchar(j);
			putchar(k);
			if (i == '7' && j == '8' && k == '9')
				continue;
			putchar(',');
			putchar(' ');
				}
				}
			}
		}
	}
	}
	{
		putchar('\n');
	}
	return (0);
}


