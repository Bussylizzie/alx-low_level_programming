/**
 * main Entry - point
 *
 * This program will assign a random number to the variable n 
 * each time it is executed. order to print the last digit of the number
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

