#include "variadic_functions.h"

/**
 * sum_them_all - sum all its parameters
 * @n: number of arguments
 *
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(sum, n);
	for (i = 0; i < n; i++)
		sum += va_arg(sum, int);

	va_end(sum);
	return (sum);
}
