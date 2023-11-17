#include "main.h"

/**
 * _puts - print a string
 * @s: a string
 *
 * Return: nothing
 */
void _puts(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
	_putchar('\n');
}

