#include "main.h"
#include <stdio.h>
/**
 * print_rev - diplay string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len > 0)
	{
		_putchar(*s);
		len--;
		s--;
	}
	_putchar('\n');
}
