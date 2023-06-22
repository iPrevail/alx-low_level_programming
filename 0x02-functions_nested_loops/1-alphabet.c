#include "main.h"

/**
 * print_alphabet - to print in lowercase
 *
 * void: doesnt return a value
 */

void print_alphabet(void)
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		_putchar(lowercase);
		lowercase++;
	}
	_putchar('\n');
	return;
}
