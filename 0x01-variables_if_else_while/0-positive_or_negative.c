/**
 * main - Entry point
 * this program will assign random numbers each time it is executed
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	int n;

	srand(time(0));
		n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is positive \n");
	}
	else if (n < 0)
	{
		printf("n is negative \n");
	}
	else
	{
		printf("n is zero \n");
	}
	return (0);
}

