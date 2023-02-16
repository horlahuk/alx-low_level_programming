#include <stdio.h>
/**
 * main - prints sizes of any type
 * Return: (0)Success
 */

int main(void)
{
	printf("size of char: %lu byte\n", sizeof(char));
	printf("size of short: %lu byte\n", sizeof(short));
	printf("size of int: %lu byte\n", sizeof(int));
	printf("size of float: %lu byte\n", sizeof(float));
	printf("size of long: %lu byte\n", sizeof(long));
	printf("size of long long: %lu byte\n", sizeof(long long));
	printf("size of double: %lu byte\n", sizeof(double));
	printf("size of long double: %lu byte\n", sizeof(long double));

return (0);
}
