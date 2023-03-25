#include "main.h"
/**
 * print_number - prints an int
 * @n: int to print
 */
void print_number(int n)
{
	int div, d;
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
	}
	div = 1;
	while (i / div >= 10)
	{
		div *= 10;
	}
	while (div > 0)
	{
		d = i / div;
		_putchar(d + '0');
		i -= d * div;
		div /= 10;
	}
}
