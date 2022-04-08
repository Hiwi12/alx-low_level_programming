#include <stdio.h>

/**
 *  main - print the alphabet at the revirse
 *
 *  Return: Always (success0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
