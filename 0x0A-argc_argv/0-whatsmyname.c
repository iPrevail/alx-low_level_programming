#include <stdio.h>

/**
 * main - to print the name of the program file
 * @argc: the number of string arguments
 * @argv: the array of pointers to the string arguments
 *
 * Return: Always 0, if success
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
