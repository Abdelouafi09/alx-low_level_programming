#include "main.h"
#include <string.h>
/**
 * string_toupper - lowercase to uppercase
 * @str: string to work on
 * Return: string in uppercase
 */
char *string_toupper(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len && str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	}
	return (str);
}
