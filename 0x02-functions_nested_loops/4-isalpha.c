#include "main.h"

/**
 * _isalpha - Function that checks for alphabet character.
 * @c: the input character to check
 * Return: int.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
