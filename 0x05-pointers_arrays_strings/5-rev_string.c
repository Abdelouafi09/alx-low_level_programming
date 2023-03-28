#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: string to work on
 */
void rev_string(char *s)
{
	int len, i;
	char a;

	len = _strlen(s);
	for (i = 0; i < len; i++)
	{
		*(&a + i) = *s;
		s++;
	}
	s -= len;
	while (len > 0)
	{
		*s = *(&a + len);
		s++;
		len--;
	}
}
