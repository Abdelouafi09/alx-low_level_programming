#include "main.h"
/**
 * _strcpy - copy string
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*s++ = *src++;
	}
	*s = '\0';
	return (dest);
}
