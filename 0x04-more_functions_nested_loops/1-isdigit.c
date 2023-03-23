#include "main.h"

/**
 * _isdigit - confirm if a char is a number
 *
 * Return: 1 if c is number and 0 if not
 *
 * @c: character given to the function
 */
int _isdigit(int c)
{
	if (c < 58 && c > 47)
		return (1);
	else
		return (0);
}
