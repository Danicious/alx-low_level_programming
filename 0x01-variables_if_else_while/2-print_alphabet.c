# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/**
 * main - prints alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char lw;

	for (lw = 'a'; lw <= 'z'; lw++)
	{
		putchar(lw);
	}
	putchar('\n');
return (0);
}
