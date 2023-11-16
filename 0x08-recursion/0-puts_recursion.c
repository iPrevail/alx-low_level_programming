#include "main.h"

/**
 * _puts_recursion - to recursively print a string
 * @s: Pointer to char array
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
