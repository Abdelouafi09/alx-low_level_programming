#include "main.h"
/**
 * factorial - calculate the factorial
 * @n: int to work on
 * Return: resulte
 */
int factorial(int n)
{
	int f;

	if (n < 0)
	{
		f = -1;
	}
	if (n > 0)
	{
		f = n * factorial(n - 1);
	}
	else
	{
		f = 1;
	}
	return (f);
}
