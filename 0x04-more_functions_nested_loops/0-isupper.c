#include "main.h"

/**
 * _isupper - confirm if a char is uppercase
 *
 * Return: 1 if c is uppercase and 0 if not
 *
 * @c: character given to the function
 */
int _isupper(int c)
{
	if (c < 91 && c > 64)
		return (1);
	else
		return (0);
}
