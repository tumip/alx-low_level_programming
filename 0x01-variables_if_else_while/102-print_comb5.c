#include <stdio.h>

/**
 *main - Entry point
 *
 *program that prints all possible
 *different combinations of two digits
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int i, j = 0;

while (j <= 9)
	{
	i = 0;
		while (i <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
		}

		j++;

		if (j <= 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		return (0);
		}
	}
	return (0);
}
