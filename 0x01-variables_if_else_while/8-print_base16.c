#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print numbers in base 16
 * Return: 0
 */
int main(void)
{
	int n;
	char lc;

	for (n = 0; n < 16; n++)
	{
		putchar((n % 16) + '0');
	}
	for (lc = 'a'; lc < 'f'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
return (0);
}
