#include "main.h"

/**
 * _puts - a function that prints a string
 *
 * @str : pointer to a char
 * Return : nothing
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
