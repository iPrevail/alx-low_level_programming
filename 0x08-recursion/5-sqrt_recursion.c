#include "main.h"

/**
 * sqrt_check - find the root of n
 * @n: the number to find its root
 * @x: the number I assume
 *
 * Return: x
 */
int sqrt_check(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
		return (sqrt_check(n, x + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - find the natural square root usinng assumptions
 * @n: the number to check its square root
 *
 * Return: x
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (sqrt_check(n, 2));
}

