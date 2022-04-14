#include "main.h"

/**
 * print_sign - print te sign of number
 * @n: intiger variable
 *
 * Return: 1 for postive, 0 for zero and -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
