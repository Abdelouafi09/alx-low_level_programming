#include "main.h"
/**
 * print_number - prints an int
 * @n: int to print
 */
void print_number(int n)
{
	int div, d;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / div >= 10)
	{
		div *= 10;
	}
	while (div > 0)
	{
		d = n / div;
		_putchar(d + '0');
		n -= d * div;
		div /= 10;
	}
}
