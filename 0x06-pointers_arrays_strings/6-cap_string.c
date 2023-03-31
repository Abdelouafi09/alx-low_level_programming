#include "main.h"
#include <ctype.h>

/**
 * cap_string - uppercase the first char in every word
 * @str: string
 * Return: string result
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	char *p = str;
	while (*p != '\0')
	{
		if (isspace(*p) || ispunct(*p))
		{
			capitalize_next = 1;
		}
		else 
			if (capitalize_next)
			{
				*p = toupper(*p);
				capitalize_next = 0;
			}
		p++;
	}
	return (str);
}
