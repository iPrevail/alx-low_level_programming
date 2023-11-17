#include "main.h"

/**
 *_islower - to check if letter is lowercase
 *@c: the character to check
 * Return: if true 1 if false 0
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
