#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: index
 *
 * Return: 1 if success and -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int dummy = 1UL << index;

	if (n == NULL)
		return (-1);

	dummy = ~dummy;
	*n = *n & dummy;

	return (1);
}
