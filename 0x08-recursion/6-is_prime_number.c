#include "main.h"

int prime(int n, int i);

/**
 * is_prime_number - check if prime number or not
 * @n: number to work on
 *
 * Return: 1 ==> yes, 0 ==> no
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - calculates if a number is prime
 * @n: work on
 * @i: interator
 *
 * Return: 1 if n is prime, 0 if not
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
