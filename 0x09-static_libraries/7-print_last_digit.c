#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @j: input is integer
 *
 * Return: value of the last digit
 */
int print_last_digit(int j)
{
	int k;

	k = j % 10;
	if (k < 0)
	{
		_putchar(-k + 48);
		return (-k);
	}
	else
	{
		_putchar(k + 48);
		return (k);
	}
}
