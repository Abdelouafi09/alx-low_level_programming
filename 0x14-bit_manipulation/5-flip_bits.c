#include "main.h"

/**
 * flip_bits - count the number of bits we need to flip to get from one number,
 *		to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bites we need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c = 0;
	unsigned long int cmp = n ^ m;

	while (cmp > 0)
	{
		c += cmp & 1;
		cmp = cmp >> 1;
	}
	return (c);
}
