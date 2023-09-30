#include "main.h"

/**
 * get_endianness - checks the endianness of the OS
 *
 * Return: return 0 id big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n = 1;
	char *p = (char *)&n;

	return (*p);
}
