#include "main.h"
#include <stdio.h>
#include <string.h>

void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
		printf("%8x: ", i);
	for (j = 0; j < 10; j++)
	{
		if ((i + j) >= size)
			printf(" ");
		else
			printf("%02x", *(b + j + i));
		if ((j % 2) != 0 && j != 0)
			printf(" ");
	
