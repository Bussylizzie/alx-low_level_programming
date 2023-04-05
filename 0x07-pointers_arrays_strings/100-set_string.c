#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s: pointrr to pointer
 * @to: pointer
 * Return: Always 0
 */
void set_string(char **s, char *to)
{
	char a;

	to = &a;
	*s = to;
}
