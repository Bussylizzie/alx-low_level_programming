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
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	i = n % 10;
if (i != 0 && i < 6)
{
	printf("last digit of %d is %d and is less than 6 and not 0\n", n, i);
}
else if (n > 5)
{
	printf("last digit of %d is %d and is greater than 5\n", n, i);
}
else
{
	printf("last digit of %d is %d and is 0\n", n, i);
}
return (0);
}

