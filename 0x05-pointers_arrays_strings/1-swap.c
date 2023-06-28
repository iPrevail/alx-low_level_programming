#include "main.h"

/**
 * swap_int - to swap the value of two integers
 * @a: first pointer to the first integer
 * @b: second pointer to the second integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
