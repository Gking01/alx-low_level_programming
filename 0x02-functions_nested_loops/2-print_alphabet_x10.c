#include "main.h"

/*
 * void print_alphabet_x10(void) - print alphabet x10 time 
 *
 * Return: nothing
 *
 */

void print_alphabet_x10(void)
{
	int 1;
	int n = 0;

	while (n < 10)
	{
		1 = 'a';
		while (1 <= 'z')
		{
			_putchar(1);
			1 += 1;
		}
		_putchar(10);
		n+= 1;
	}
}
