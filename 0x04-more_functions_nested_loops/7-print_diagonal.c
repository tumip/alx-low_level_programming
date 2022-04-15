#include "main.h"
/**
 * print_diagonal - prints diagonal line
 *@n: print int
 * Return: Always 0.
 */
void print_diagonal(int n)
{

int c;
int x;

if (n > 0)
{
for (c = 0; c < n; c++)
{
for (x = 0; x < c; x++)
{
_putchar (' ');
}
_putchar (92);
_putchar ('\n');

}

}
