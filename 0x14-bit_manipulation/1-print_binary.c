#include "main.h"

/**
* print_binary - prints the binary representation of a number
* @n: the number to print
*
* Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 31;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((mask & n) > 0)
			_putchar('1');
		else
			_putchar('0');

		mask = mask >> 1;
	}
}
