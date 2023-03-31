#include "main.h"
/**
 * leet - change some char with int
 * @str: string to work on
 * Return: changed char
 */
char *leet(char *str)
{
	int i, j;
	char s0[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char s1[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s0[j])
				str[i] = s1[j];
		}
	}
	return (str);
}
