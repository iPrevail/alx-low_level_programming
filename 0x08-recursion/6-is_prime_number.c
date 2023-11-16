#include "main.h"

/**
 * check_if_prime - check if a number is a prime
 * @x: the number to check
 * @a: the divisor we assume
 *
 * Return: 1 if prime, 0 if otherwise
 */
int check_if_prime(int x, int a)
{
	if (x == a || x / 2 == a)
	{
		return (1);
	}
	else if (x % a == 0)
		return (0);
	else
		return (check_if_prime(x, a + 1));
}

/**
 * is_prime_number - check if n is a prime number
 * @n: the number integer to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_if_prime(n, 2));
}
