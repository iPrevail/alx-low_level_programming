#include "main.h"

/**
 * _abs - to compute absolute value of an integer
 *@num: the number to check
 * Return: the value, 0, the value * -1
 */
int _abs(int num)
{
	if (num > 0)
	{
		return (num);
	}
	else if (num == 0)
	{
		return (0);
	}
	else
	{
		return (num * -1);
	}
}
