#include "main.h"
/**
 *print_triangle - prints a triangle 
 *@size: size of triangle
 *
 *Return: void
 */
void print_triangle(int size)
{
int i, j, ln;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
for (ln = 1; ln <= (size - i); ln++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#);
}
_putchar('\n')
}
}
}
