#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int print_numbers;

	for (print_numbers = '0'; print_numbers <= '9'; ++print_numbers)
	{
		_putchar(print_numbers);
	}
	{
		_putchar('\n');
	}
}
