#include "main.h"

/**
 * set_bit - set the bite value on the provided position to 1
 *
 * @n: the int to search in
 * @index: the index of the desired bite
 *
 * Return: 1 if worked, -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	a = a << index;
	*n = *n | a;
	return (1);
}
