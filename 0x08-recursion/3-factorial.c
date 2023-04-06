#include "main.h"
/**
 * factorial - calculate the factorial
 * @n: int to work on
 * Return: resulte
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
