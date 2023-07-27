#include <stdio.h>

/**
 *main - Entry point
 *
 *program to print alphabet using putchar
 *
 *continue - skips to next iteration
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e')
			continue;
		else if (i == 'q')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
