#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of intergers
 *
 * @a: int value
 * @n: number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
int ;

i = 0;

while (i < n)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}

i++;
}
printf("\n");
}

