#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index
 *
 * Return: 1 if it worked and -1 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int dummy = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	dummy <<= index;
	*n = *n | dummy;

	return (1);
}
