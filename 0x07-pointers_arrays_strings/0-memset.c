#include "main.h"
#include <string.h>
/**
 * _memset - replace with special
 * @n: number of bytes to change
 * @b: character to replace with
 * @s: string to work on
 * Return: string changrd
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
