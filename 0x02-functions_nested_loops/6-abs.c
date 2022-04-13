#include "main.h"

/**
*abs - function for printing absolute value
*
*Return: Always 0.
*/

int _abs(int)
{
int n;
if (n < 0)
{
n = (-1) * n;
_putchar('%i', n);
}
else
{
_putchar('%i', n);
}

return (0);


}
