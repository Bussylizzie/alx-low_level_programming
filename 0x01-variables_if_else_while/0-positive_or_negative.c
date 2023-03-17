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

	printf("input n:\n");
	scanf("%d", &n);
	if (n > 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (1);
	}
	else
	{
		printf("n is zero.\n");
	}
}

