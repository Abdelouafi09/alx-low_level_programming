#include "main.h"
#include <string.h>
/**
 * _strcat - concatinate string
 * @dest: string to add to
 * @src: string to add
 * Return: return dest string containe both strings
 *
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (i = 0; i < len2 && *src != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}
	dest[len1 + len2] = '\0';
	return (dest);
}
