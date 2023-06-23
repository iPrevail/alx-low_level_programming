#include "main.h"

/**
 * print_square - print square
 * @size: size of the square
 * Return: nothing
 */
void print_square(int size)
{
	int i = 0;

	if (size != 0 && !(size <= 0))
	{
		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
