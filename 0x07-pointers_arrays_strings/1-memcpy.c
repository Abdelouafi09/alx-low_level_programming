#include "main.h"
/**
 * @n: number of char to copy
 * @src: string to copy
 * @dest: memory adresse to copy in
 * Return: copied content
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest, *s = src;

	while (n-- > 0)
	{
		*d++ = *s++;
	}
	return (dest);
}
