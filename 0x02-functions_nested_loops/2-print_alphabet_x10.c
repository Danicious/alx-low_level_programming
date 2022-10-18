#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int tenx;
	char lw;

	for (tenx = 0; tenx <= 10; tenx++)
	{
		for (lw = 'a'; lw <= 'z'; lw++)
			_putchar(lw);

		_putchar('\n');
	}
}


