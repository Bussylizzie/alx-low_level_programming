#include<stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)

{
	int count;
	unsigned long fib_1 = 0, fib_2 = 1, sum;
	unsigned long fib_1a, fib_1b, fib_2a, fib_2b;
	unsigned long a, b;

	for (count = 0; count < 92; ++count)
	{
		sum = fib_1 + fib_2;
		printf("%lu, ", sum);
		fib_1 = fib_2;
		fib_2 = sum;
	}
	fib_1a = fib_1 / 10000000000;
	fib_2a = fib_2 / 10000000000;
	fib_1b = fib_1 % 10000000000;
	fib_2b = fib_2 % 10000000000;
	for (count = 93; count < 98; ++count)
	{
		a = fib_1a + fib_2a;
		b = fib_1b + fib_2b;
		if (fib_1b + fib_2b > 999999999)
		{
			a += 1;
			b %= 10000000000;
		}
		printf("%lu%lu", a, b);
		if (count != 98)
			printf(" ,");
		fib_1a = fib_2a;
		fib_1b = fib_2b;
		fib_2a = a;
		fib_2b = b;
	}
	printf("\n");
	return (0);
}


