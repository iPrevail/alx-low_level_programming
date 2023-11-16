#include "main.h"

/**
 * _pow_recursion - a funtion that calculates x raised to the power of y
 * @x: the base value
 * @y: the power value
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * power(x, y - 1));
}

