#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a;
	int i = 0;

	a = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (a > 0)
	{
		if ((a - 25) >= 0)
		{
			a = a - 25;
			continue;
		}
		if ((a - 10) >= 0)
		{
			a = a - 10;
			continue;
		}
		if ((a - 5) >= 0)
		{
			a = a - 5;
			continue;
		}
		i++;
		a--;
	}
	printf("%d\n", i);
	return (0);
}

