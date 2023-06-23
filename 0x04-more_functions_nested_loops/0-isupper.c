#include "main.h"

/**
 * _isupper - to check for uppercase character
 * @c: the parameter to check
 * Return: 1 if uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
