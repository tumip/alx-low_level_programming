#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @src: pointer
 *
 * @dest: pointer
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i, len;

for (len = 0; src[len] != '\0'; len++)
{
}

for (i = 0; i <= len; i++)
{
dest[i] = src[i];
}
return (dest);
}

