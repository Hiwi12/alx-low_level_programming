#include "main.h"

/**
 * _isalpha - check for the alphabet
 * @c: tne character to be cheaked
 *
 * Return: return 1 if it is alphabet otherwise return 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
