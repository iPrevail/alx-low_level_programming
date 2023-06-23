#include "main.h"

/**
 * print_numbers - print digit 0 through 9
 *
 * Return: nothing (void)
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
