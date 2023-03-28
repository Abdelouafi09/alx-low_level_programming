#include "main.h"
#include <stdio.h>
/**
 * print_rev - diplay string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int len;
	char *first;

	len = 0;
	first = s;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (s >= first)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
