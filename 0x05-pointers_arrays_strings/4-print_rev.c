#include "main.h"

/**
 * print_rev - prints str in rev
 *
 * @s: int poiter to be changed
 *
 * Return: void
 */

void print_rev(char *s)
{
int i;
i = 0;
while (s[i] !='\0')
{
i++;
}

for (i = i - 1; 1 >= 0; i--)
{
_putchar (s[i]);
}
_putchar('\n');
}

