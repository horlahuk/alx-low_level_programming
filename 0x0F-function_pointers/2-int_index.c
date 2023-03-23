#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of int
 * @size: size of array element
 * @cmp: function pointer to compare int
 *
 * Return: index of the first element for which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if ((*cmp)(array[i]) == 1)
				return (i);
			i++;
		}
	}
	return (-1);
}
