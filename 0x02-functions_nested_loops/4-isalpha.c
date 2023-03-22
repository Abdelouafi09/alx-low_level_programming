#include "main.h"

/**
 * _isalpha - confirm if a char is alpha
 *
 * Return: 1 if c is alpha and 0 if not
 *
 * @c: character given to the function
 */
int _isalpha(int c)
{
	if ((c < 123 && c > 96) || (c < 91 && c > 64))
		return (1);
	else
		return (0);
}
