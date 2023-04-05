#include "main.h"
#include <string.h>
/**
 * _strchr - locate a character
 * @c: character to locate
 * @s: string to search inside
 * Return: pointer to the first occurence
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
