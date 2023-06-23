#include "main.h"

/**
 * more_numbers - to check for a digit 0 through 9
 *
 * Return: nothing (void)
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 15)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
		i++;
	}
}
