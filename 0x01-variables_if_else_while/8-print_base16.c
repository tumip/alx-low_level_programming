 #include <stdio.h>

 /**
 *main - Entry point
 *
 *program to print base16 single digits
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
		putchar('\n');
	return (0);
}
