# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/**
 * main - Print alphabets in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char cs;

	for (cs = 'a'; cs <= 'z'; cs++)
		putchar(cs);

	for (cs = 'A'; cs <= 'Z'; cs++)
		putchar(cs);
	putchar('\n');
return (0);
}
