#include <stdlib.h>

/**
 * create_array - create an arraty of chars and
 * initialize it with a particular char
 * @size: an unsigned int rep size of array
 * @c: the char value to initializethe array with
 *
 * Return: pointer to the array if successful,
 * NULL if otherwise
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size > 0)
	{
		char *str = (char *) malloc(sizeof(char) * size);

		if (str == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
			*(str + 1) = c;
		return (str);
	}
	return (NULL);
}

