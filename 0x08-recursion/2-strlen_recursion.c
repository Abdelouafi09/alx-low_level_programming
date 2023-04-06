#include "main.h"
/**
 * _strlen_recursion - return the length of s
 * @s: string to work on
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int c;

	if (*s)
	{
		c = 1;
		c += _strlen_recursion(s + 1);
	}
	return (c);
}
