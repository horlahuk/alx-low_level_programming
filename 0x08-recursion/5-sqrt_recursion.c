#include "main.h"
/**
 * sqrt_iterate - uses an iteration value to find the integer
 * @g: iteration value
 * @c: num to find sqrt of
 * Return: -1 or sqrt of c
 */
int sqrt_iterate(int c, int g)
{
	if (g * g == c)
		return (g);
	else if (g * g > c)
		return (-1);
	else
		return (sqrt_iterate(c, g + 1));
}
/**
 * _sqrt_recursion - returns the square root of a given number
 * @n: input number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_iterate(n, 1));
}
