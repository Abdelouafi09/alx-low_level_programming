#include "main.h"
/**
 * _puts - display a string
 * @str: string to show
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
