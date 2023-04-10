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
	int i, j;
	int k;

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	if (argc == 3)
	{
		k = i * j;
	}
	else if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", k);
	return (0);
}


