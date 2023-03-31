#include "main.h"

/**
 * cap_string - uppercase the first char in every word
 * @str: string
 * Return: string result
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[] = {' ', '"', ',', ';', '.', '!', '?', '\n', '\t', '(', ')', '{', '}'};

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
			{
				*(s + i) = *(s + i) - 'a' + 'A';
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (sep[j] == *(s + i - 1))
					{
						*(s + i) = *(s + i) - 'a' + 'A';
					}
				}
			}
		}
		i++;
	}
	return (s);
}
