#include "main.h"
#include <stdio.h>
/**
 * _atoi - print int
 * @s:  tested char
 * Return: int
 */
int _atoi(char *s)
{
unsigned int counter, i, j, k, len, num, l;
int aux;

aux = 1;
counter = 0;
num = 0;

while (*(s + counter) != '\0')
counter++;
for (i = 0; i < counter; i++)
{
if (*(s + i) <= '9' && *(s + i) >= '0')
break;
}
for (j = i; j < counter; j++)
{
if (!(*(s + j) <= '9' && *(s + j) >= '0'))
break;
}
for (k = 0; k < i; k++)
{
if (*(s + k) == '-')
aux = -aux;
}
len = j - i;
l = i;
while (len >= 1)
{
num = num * 10 + (*(s + l) -'0');
l++;
len--;
}
return (num *aux);
}
