#include "main.h"

/**
 * factorial - calculates factorial of a number
 * @n: the number to calculate its factorial
 *
 * Return: -1 or 1 or greater than 1 if n is <0, 0 or >0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}

