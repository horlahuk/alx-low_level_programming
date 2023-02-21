#include "main.h"
/**
 * print_alphabet - prints lower case letters
 *
 * Return: Always (0) Success
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
