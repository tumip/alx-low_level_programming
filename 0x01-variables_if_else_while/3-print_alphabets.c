#include <stdio.h>

/**
 *main -Entry point
 *
 *program to print alphabet using putchar
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
return (0);
}
