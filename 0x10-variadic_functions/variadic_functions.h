#ifndef _VARIADIC_FUNCTION_H_
#define _VARIADIC_FUNCTION_H_

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct print_format - print all formats
 * @symbol: format specifier
 * @print: function pointer
 */
typedef struct print_format
{
	char symbol;
	void (*print)(va_list arg);
} prt;

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_str(va_list arg);
void print_all(const char * const format, ...);

#endif
