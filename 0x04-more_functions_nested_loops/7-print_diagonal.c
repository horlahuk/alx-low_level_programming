#include "main.h"
/**
 * print_diagonal - print diagonal line n times
 * @n: number of times diagonal line will pront
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (a < (n - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
