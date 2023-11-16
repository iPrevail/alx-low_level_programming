#include "main.h"

/**
 * length - return the length of the string
 * @s: pointer to a string
 *
 * Return: length of the string
 */
int length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length(s + 1));
}

/**
 * compare - compare two characters in a string
 * @s: pointer to a string to compare
 * @n: the end of the string
 * @x: the start of the string
 * Return: 1 if same, 0 if not same
 */
int compare(char *s, int n, int x)
{
	if ((n == x) || (x + 1 == n))
	{
		if (s[n] == s[x])
			return (1);
		else
			return (0);
	}
	return (1 + compare(s, n - 1, x + 1));
}

/**
 * is_palindrome - check if string is a palindrome
 * @s: pointer to the string in question
 *
 * Return: 1 if so, 0 if not so
 */
int is_palindrome(char *s)
{
	if (length(s) == 1)
		return (1);
	return (compare(s, length(s) - 1, 0));
}

