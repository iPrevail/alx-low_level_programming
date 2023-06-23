#include "main.h"

/**
 * print_most_numbers - to check for a digit 0 through 9
 *
 * Return: nothing (void)
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar('0' + i);
	}
	_putchar('\n');
}
