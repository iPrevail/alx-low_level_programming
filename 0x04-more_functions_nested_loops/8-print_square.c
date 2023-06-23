#include "main.h"

/**
 * print_square - print square
 * @size: size of the square
 * Return: nothing
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
	}
}
