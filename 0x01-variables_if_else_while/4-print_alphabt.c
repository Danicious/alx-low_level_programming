# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/**
 * main - Print all alphabets followed by a new line except for q and e
 * all alphabets in lower case
 * Return: 0
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'e' && al != 'q')
			putchar(al);
	}
	putchar('\n');
return (0);
}
