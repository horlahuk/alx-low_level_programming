#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of parameters
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print_numbers;

	unsigned int i;

	va_start(print_numbers, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator)
			printf("%d%s", va_arg(print_numbers, int), separator);
		else
			printf("%d", va_arg(print_numbers, int));
	}
	printf("%d", va_arg(print_numbers, int));
	printf("\n");
	va_end(print_numbers);
}
