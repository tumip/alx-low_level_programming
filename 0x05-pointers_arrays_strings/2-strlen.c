#include "main.h"

/**
 * _strlen - length of str
 *
 * @s: str to check
 *
 * Return: str length
 */

int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

