#include "main.h"

/**
 * _strncpy - copys a string
 * @dest: string copied
 * @src: string to copy
 * @n: length of src
 * Return: dest (copied string)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
