#include "main.h"

/**
 * puts2 - function that prints every other character of a string, starting with the first character
 *
 * @str: pointer to char
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[1] !='\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + 1));
		}
		i += 1; 
	}
	_putchar('\n');
}
