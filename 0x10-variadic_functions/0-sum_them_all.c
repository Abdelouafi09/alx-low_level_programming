#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - return the sum of all args
 *
 * @n: number of args
 *
 * Return: the result of the operation
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int s = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s += va_arg(args, int);
	}
	va_end(args);
	return (s);
}
