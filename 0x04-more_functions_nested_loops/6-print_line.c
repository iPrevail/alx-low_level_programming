#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 *@n: number of times - should appear
 * Return: nothing (void)
 */
void print_line(int n)
{
	int i = 0;

	if (n != 0 && !(n <= 0))
	{
		while (i < n)
		{
			_putchar('-');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
