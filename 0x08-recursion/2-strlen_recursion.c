#include "main.h"

/**
 * _strlen_recursion - find the length of string
 * @s: pointer to string
 *
 * Return: integer value length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + (_strlen_recursion(s)));
}

