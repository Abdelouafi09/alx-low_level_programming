#include "main.h"

/**
 * print_sign - confirm the sign og a number given
 *
 * Return: 1 if n > 0 and 0 if n = 0 and -1 if n < 0
 *
 * @n: character given to the function
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	else
	{
		return (0);
		_putchar('0');
	}
	_putchar('\n');
}
