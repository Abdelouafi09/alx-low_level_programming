#include "main.h"

/**
 * _abs - give the absolute value of an int
 *
 * Return: +x if x < 0 and x if x > 0
 *
 * @x: character given to the function
 */
int _abs(int x)
{
	if (x < 0)
	{
		int r;

		r = -(x);
		return (x);
	}
	else
		return (x);
}
