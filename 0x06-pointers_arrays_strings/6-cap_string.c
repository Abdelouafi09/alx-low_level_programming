#include "main.h"

/**
 * cap_string - uppercase the first char in every word
 * @str: string
 * Return: string result
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (!(str[i] <= 'z' && str[i] >= 'a'))
			i++;
		if (str[i - 1] == ' ' || str[i - 1] == ','
				|| str[i - 1] == ';' || str[i - 1] == '.'
				|| str[i - 1] == '?' || str[i - 1] == '!' || str[i - 1] == '"'
				|| str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{'
				|| str[i - 1] == '}' || str[i - 1] == '\t' || str[i - 1] == '\n')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
