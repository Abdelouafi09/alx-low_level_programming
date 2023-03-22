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
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1):
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
