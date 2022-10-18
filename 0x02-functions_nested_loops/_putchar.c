#include "main.h"
#include <unistd.h>


/**
 * _putchar - writes the letter c to stdout
 * c: letter to  print
 * Return: on sucess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
