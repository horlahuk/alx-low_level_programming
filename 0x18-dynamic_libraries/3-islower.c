#include "main.h"
/**
 * _islower - checks for lower case character
 *@c: Is an ASCII character
 * Return: 1 for lowercase and 0 for uppercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
