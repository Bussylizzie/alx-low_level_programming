/**
 * main - Entry - point
 *
 * Return: Always (0)
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n != 0 && n < 6)
{
	printf("last digit of n is %d and is less than 6 and not 0\n", n);
}
else if (n > 5)
{
	printf("last digit of n is %d and is greater than 5\n", n);
}
else
{
	printf("last digit of n is %d and is 0\n", n);
}
return (0);
}

