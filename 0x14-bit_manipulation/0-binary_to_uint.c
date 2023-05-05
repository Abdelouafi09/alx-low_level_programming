#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number as a string
 *
 * Return: converted number or 0 if there is one or more chars in
 * the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	unsigned int l = 0;

	if (!b)
		return (0);

	while (b[l] != '\0')
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
		l++;
	}

	while (*b != '\0')
	{
		n <<= 1;
		if (*b == '1')
			n += 1;
		b++;
	}

	return (n);
}
