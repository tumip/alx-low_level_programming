#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int a;
int redo;


redo = 0;
while (redo < 10)
{
for (a = 'a' ; a <= 'z'; a++)
{
_putchar(a);
}

redo++;
_putchar('\n');
}


}
