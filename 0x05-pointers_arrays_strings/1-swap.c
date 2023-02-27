#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: int value a
 * @b: int value b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	a = &tmp;
	*b = *a;
	*b = tmp;
}
