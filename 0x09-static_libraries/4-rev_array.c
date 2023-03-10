#include "main.h"
/**
 * reverse_array - reverse the the content of an array
 * @a: array of int
 * @n: number of elemnts of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n; i++)
	{
		for (j = i; j > 0; j--)
		{
			tmp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = tmp;
		}
	}
}
