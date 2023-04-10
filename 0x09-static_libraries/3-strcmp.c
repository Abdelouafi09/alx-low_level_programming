#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: an integer that segnify the result
 */
int _strcmp(char *s1, char *s2)
{
	int len, i, c;

	len = strlen(s1);
	for (i = 0; i < len && s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		c = s1[i] - s2[i];
		if (c == 0)
			continue;
		else
			break;
	}
	return (c);
}
