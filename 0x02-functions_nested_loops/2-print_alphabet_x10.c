#include "main.h"

/*
 * void print_alphabet_x10(void) - print alphabet x10 time 
 *
 * Return: nothing
 *
 */

void print_alphabet_x10(void)
{
	int l;
	int n = 0;

	while (n < 10)
	{
		l = 'a';
		while (l <= 'z')
		{
			_putchar(l);
			l += 1;
		}
		_putchar(10);
		n += l;
	}
}
