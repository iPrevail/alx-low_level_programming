#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digits = '0';
	char alphabets = 'a';

	while (digits <= '9')
	{
		putchar(digits);
		digits++;
	}
	while (alphabets <= 'f')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}
