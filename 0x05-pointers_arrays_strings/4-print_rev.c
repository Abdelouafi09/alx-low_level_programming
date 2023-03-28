#include "main.h"
#include <stdio.h>
/**
 * print_rev - diplay string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int len, i;
	/*char *first;*/

	len = 0;
	/*first = s;*/
	while (*s != '\0')
	{
		len++;
		s++;
	}
	for (i = len; i > 0; i--)
	{
		--s;
		_putchar(*s);
	}
	_putchar('\n');
}
