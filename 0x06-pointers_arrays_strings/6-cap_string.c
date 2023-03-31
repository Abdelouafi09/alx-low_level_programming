#include "main.h"
#include <ctype.h>

/**
 * cap_string - uppercase the first char in every word
 * @str: string
 * Return: string result
 */
char *cap_string(char *str)
{
	int cap = 1;
	char *p = str;

	while (*p != '\0')
	{
		if (isspace(*p) || ispunct(*p))
		{
			cap = 1;
		}
		else
			if (cap)
			{
				if (*p <= 'z' && *p >= 'a')
				{
					*p = *p - 'a' + 'A';
				}
				cap = 0;
			}
		p++;
	}
	return (str);
}
