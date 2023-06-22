#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: the number to check
 * Return: num%10
 */
int print_last_digit(int num)
{
	if (num > 0 || num == 0)
	{
		_putchar('0' + num % 10);
		return (num % 10);
	}
	else
	{
		_putchar('0' + -(num % 10));
		return (-(num % 10));
	}
}
