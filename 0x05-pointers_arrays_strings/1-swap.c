#include "main.h"

/**
 * swap_int - swaps int values
 *
 * @a: int 1
 * @b: int 2
 *Return: void
 */

void swap_int(int *a, int *b)
{
int c;

c = 0;
c = *a;
*a = *b;
*b = c;
}

