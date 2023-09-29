#include "main.h"

/**
 * binary_to_uint - cnvrt a string of binary to an unsigned int
 * @b: pointer to a string of binary numbers 1 and 0
 * Return: returns the unsigned int or 0 if b is NULL or
 *		,contains values that not 0 or 1
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int rslt;

	rslt = 0;
	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b == '1' || *b == '0')
		{
			rslt = rslt << 1;
			rslt += *b - '0';
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (rslt);
}
