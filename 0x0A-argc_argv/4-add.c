#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument array
 * Return: 1 for error
 */
int main(int argc, char *argv[])
{
	int add, j, i;

	add = 0;

	for (j = 0; j < argc; j++)
	{
		for (i = 0; i < argc; i++)
		{
			if (argv[j][i] == 0)
		{
			printf("0\n");
		}
			else if ((argv[j][i] >= 0) || (argv[j][i] <= 9))
		{
			add = add + argv[j][i];
		}
			else
		{
			printf("Error\n");
			return (1);
		}
		printf("%d\n", add);
	}
	}
	return (0);
}

