#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	unsigned long int n, i, r;

	n = 612852475143;
	for (i = 2; i <= n; i++)
	{
		while (n % i == 0)
		{
			r = i;
			n /= i;
		}
	}
	printf("%lu\n", r);
	return (0);
}
