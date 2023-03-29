#include "main.h"
#include <stdio.h>
/**
 * puts_half - show second half of string
 *
 * @str: string
 */
void puts_half(char *str)
{
	int n, len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= len;
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}
	str += n;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
