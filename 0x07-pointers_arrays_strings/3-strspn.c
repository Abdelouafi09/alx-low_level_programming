#include "main.h"
#include <string.h>
/**
 * _strspn - counts
 * @accept: string to check with
 * @s: string to check
 * Return: number of matches
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;

	while (*s != '\0')
	{
		char *p = accept;

		while (*p != '\0')
		{
			if (*s == *p)
			{
				c++;
				break;
			}
			p++;
		}
		if (*p == 0)
			break;
		s++;
	}
	return (c);
}
