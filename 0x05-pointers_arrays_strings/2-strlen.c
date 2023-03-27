#include "main.h"
/**
 * _strlen - display length
 * @s: char to operate on
 * Return: return an int
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
