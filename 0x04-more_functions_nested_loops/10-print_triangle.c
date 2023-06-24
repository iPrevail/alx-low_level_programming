#include "main.h"

/**
 * print_triangle - print triangle
 * @size: the size
 * Return: nothing
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 1;

		while (i <= size)
		{
			int j = 1;

			while (j < size - i)
			{
				_putchar(' ');
				j++;
			}
			int hash = 1;

			while (hash <= i)
			{
				_putchar('#');
				hash++;
			}
			_putchar('\n');
			i++;
		}
	}
}
