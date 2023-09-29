#include "main.h"

/**
 * get_bit - print the bit value on the provided position
 *
 * @n: the int to search in
 * @index: the index of the desired bite
 *
 * Return: the value of the bite on the provided index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	while (index > 0)
	{
		n = n >> 1;
		index--;
	}
	return (n & 1);
}
