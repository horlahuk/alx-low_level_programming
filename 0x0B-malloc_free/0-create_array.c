#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: size of array
 * @c: input char
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);

	if (ptr == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
