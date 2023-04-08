#include "main.h"

/**
 * flip_bits - returns the number of bits you will need to flip to get
 * from one number to another
 * @n: from number n
 * @m: to numbet m
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_nm = n ^ m;
	unsigned int count = 0;

	while (xor_nm)
	{
		count += xor_nm & 1;
		xor_nm >>= 1;
	}

	return (count);
}
