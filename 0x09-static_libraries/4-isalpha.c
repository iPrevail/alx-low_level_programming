#include "main.h"

/**
 *_isalpha- to check if letter is lowercase or uppercase
 *@c: the character to check
 * Return: if true 1 if false 0
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
