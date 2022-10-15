# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/**
 * main - LLowercase Alphabets print in reverse
 * Return: 0
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc <= 'a'; lc--)
	{
		putchar(lc);
	}
	putchar('\n');
return (0);
}
