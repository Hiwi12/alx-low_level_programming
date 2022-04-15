#include <stdio.h>

/**
 * main - print the sum of multiple of 3 and 5 less than 1024
 *
 * Return: always
 */
int main(void)
{
	int i, z;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}

		i++;
	}

	printf("%d\n", z);
	return (0);
}
