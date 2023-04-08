#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dummy = 0x80000000;

	while (dummy > 0)
	{
		if (n & dummy)
			_putchar('1');
		else
			_putchar('0');

		dummy >>= 1;
	}
}