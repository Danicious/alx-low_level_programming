#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @i: the number
 * Return: value of the number
 */
int print_last_digit(int i)
{
	int ld = i % 10;

	if (ld < 0)
		ld *= -1;

	_putchar('0' + ld);
	_putchar('\n');

	return (0);
}
