#include <stdio.h>

/**
 * main - Entry point
 *
 * program to reverse print alphabet using putchar
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
		putchar('\n');
	return (0);
}
