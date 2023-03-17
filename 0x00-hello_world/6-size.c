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

	printf("Size of an char: %zu bytes\n", sizeof(intType));
	printf("Size of a int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longintType));
	printf("Size of a long long int: %zu bytes\n", sizeof(longlongintType));
	printf("Size of a float: %zu bytes\n", sizeof(floatType));
	return (0);
}

