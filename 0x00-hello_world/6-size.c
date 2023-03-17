/**
 * main - Entry point
 * print out the various size of types
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(void)
{
	int intType;
	char charType;
	float floatType;
	long int longintType;
	long long int longlongintType;

	printf("Size of a char: %zu bytes\n", sizeof(char));
	printf("Size of an int: %zu bytes\n", sizeof(int));
	printf("Size of a long int: %zu bytes\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes\n", sizeof(long long));
	printf("Size of a float: %zu bytes\n", sizeof(float));
	return (0);
}

