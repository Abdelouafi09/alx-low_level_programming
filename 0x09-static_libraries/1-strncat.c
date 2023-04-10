#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: string to append
 * @src: string to add
 * @n: length of src
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;

	len_dest = strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len_dest + i] = src[i];
	dest[len_dest + n] = '\0';
	return (dest);
}
