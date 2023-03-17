/**
 * main - Entry point
 * this program will assign random numbers each time it is executed
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	int n;

	printf("input n: \n");
	if (n > 0)
	{
		printf("n is a positive number. \n");
	}
	else if (n < 0)
	{
		printf("n is a negative number. \n");
	}
	else if (n == 0)
	{
		printf("n is null. \n");
	}
	else
	{
		printf("n is an invalid number. \n");
	}
	return (0);
}

