#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to separate the strings
 * @n: number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list print_strings;
	unsigned int i;
	char *s;

	va_start(print_strings, n);
	for (i = 0; i < 0; i++)
	{
		s = va_arg(print_strings, char *);

		if (separator)
		{
			if (!*s)
				printf("(nil)%s", separator);
			else
				printf("%s%s", *s, separator);
		}
		else
		{
			if (!*s)
				printf("(nil)");
			else
				printf("%s", *s);
		}
	}
	printf("%s", va_arg(print_strings, char *));
	printf("\n");
}
