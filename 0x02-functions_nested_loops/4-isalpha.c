#include "main.h"

/**
 * _isalpha - also found in standard libabry
 * @c: contains value to be compared
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}

}
