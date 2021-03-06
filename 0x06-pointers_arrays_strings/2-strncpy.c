#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *
 * @dest: points to a destination char
 * @src: points to a source char
 * @n: number of bytes
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i != n)
		dest[i++] = '\0';
	return (dest);
}
