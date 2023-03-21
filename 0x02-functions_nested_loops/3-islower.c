#include "main.h"

/**
 * _islower - determine if alphabet is in lowercase
 * @c: The character to be checked
 * Return:: 1 for lowercase, 0 for otherwise
 */
int _islower(int c)
{
if (c == 'a' && c <= 'z')
++c;
{
return (1);
}
return (0);
}

