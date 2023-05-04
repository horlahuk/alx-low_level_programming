#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index
* @n: unsigned long int value
* @index: index, starting from 0 of the bit you want to get
*
* Return: the value of the bit at index index or -1 if an error occurred
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	unsigned long int mask = 1;
	mask <<= index;
	int bit = (n & mask) >> index;

	return (bit);
}
