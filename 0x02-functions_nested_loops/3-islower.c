#include "main.h"

/**
 * _islower - function that checke forlowercase character.
 * @c: The input character to check
 * Return: int.
 */

int _islower(int c)
{
	if (c >= 97 && <= 122)
		return (1);
	else
		return (0);
}