#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that print n elements of an array of intergers
 *
 * @a: pointer of first int
 * @n: pointer of second int
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
