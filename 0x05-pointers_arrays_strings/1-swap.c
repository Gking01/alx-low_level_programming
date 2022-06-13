#include "main.h"

/**
 * swap_int - a funtion that swaps the value of two intergers.
 * @a: pointer to an int
 * @b: other pointer to an int
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
