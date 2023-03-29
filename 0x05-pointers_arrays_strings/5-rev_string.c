#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: string to work on
 */
void rev_string(char *s)
{
	int len, i;
	char temp;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s -= len;
	for (i = 0; i < len / 2; i++) {
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
