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
		str++;
		if (*str != '\0')
		{
			str++;
			if (*str != '\0')
				continue;
			else
				break;
		}
		else
			break;
	}
	_putchar('\n');
}
