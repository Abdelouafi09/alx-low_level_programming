#include "main.h"
/**
 * puts2 - display a string
 * @str: string to show
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		_putchar('\n');
		str++;
	}
}
