#include "main.h"

/**
 * print_rev - recursively print a string
 * @s: the string
 * @i: the size of the string
 */
void print_rev(char *s, int i)
{
	if (i == 0)
		return;
	_putchar(s[i - 1]);
	--;
	print_rev(s, i);
}

/**
 * len_recurs - find length of string
 * @s: pointer to the string
 * @length: the length of array of characters
 *
 * Return: int length
 */
int len_recurs(char *s, int length)
{
	if (*s != '\0')
	{
		length++;
		s++;
		return (len_recurs(s, len));
	}
	return (length);
}

/**
 * _print_rev_recursion - print a string in reverserecursively
 * @s: string to rint
 */
void _print_rev_recursion(char *s)
{
	int i, x;

	x = 0;
	i = len_recurs(s, x);
	print_rev(s, i);
}

