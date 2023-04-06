#include "main.h"
/**
 * square - claculate current square
 * @n: int
 * @i: int to raise it with power of 2
 * Return: square
 */
int square(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else
	{
		if (i * i == n)
			return (i);

		else
		{
			return (square(n, i + 1));
		}
	}
}

/**
 * _sqrt_recursion - calculate the square of n
 * @n: int to find its square
 * Return: resulte
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (square(n, 2));
	}
}
