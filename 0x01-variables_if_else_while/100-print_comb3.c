#include <stdio.h>

/**
 * main - prints two digit number
 *
 * Return: always (sucess)
 */
int main(void)
{
	int c, i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; c++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(i);

				if (c != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}


