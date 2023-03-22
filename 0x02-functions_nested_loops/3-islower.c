#include "main.h"

/**
 * _islower - confirm if a char is lowercase
 *
 * Return: 1 if c is lowercase and 0 if not
 *
 * @c: character given to the function
 */
int _islower(int c)
{
	if (c < 123 && c > 69)
		return (1);
	else
		return (0);
}
