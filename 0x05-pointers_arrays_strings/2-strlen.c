#include "main.h"

/**
 * strlen - a function that returns the length of a string.
 *
 * @s: pointer to a string
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[1] != '\0')
	{
		i += 1;
	}
	return (i);
}
