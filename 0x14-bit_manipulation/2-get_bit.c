#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: index to return
 *
 * Return: the value of bit at index or -1 if error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dummy = 1;
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	dummy <<= index;
	bit = (n & dummy) >> index;

	return (bit);
}
