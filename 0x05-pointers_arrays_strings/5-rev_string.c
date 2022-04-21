#include "main.h"

/**
 * rev_string - reverse the str
 *
 * @s: str to be reversed
 */

void rev_string(char *s)
{
int len, j, i;
char a, b;

for (len = 0; s[len] != '\0'; len++)
{
}

j = len - 1;
i = o;

while (j > i)
{
a = s[i];
b = s[j];
s[i] = b;
s[i] = a;
j--;
i--;
}
}

