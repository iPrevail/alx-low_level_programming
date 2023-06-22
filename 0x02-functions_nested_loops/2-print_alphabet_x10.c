#include "main.h"

/**
 * print_alphabet_x10 - to print in lowercase 10x
 *
 * void: doesnt return a value
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}
	_putchar('\n');
	i++;
	}
}
