#include <stdio.h>
/**
 * main - prints sizes of any type
 * Return: (0)Success
 */

int main(void)
{
	printf("size of char: %zu byte\n", sizeof(char));
	printf("size of short: %zu byte\n", sizeof(short));
	printf("size of int: %zu byte\n", sizeof(int));
	printf("size of float: %zu byte\n", sizeof(float));
	printf("size of long: %zu byte\n", sizeof(long));
	printf("size of long long: %zu byte\n", sizeof(long long));
	printf("size of double: %zu byte\n", sizeof(double));
	printf("size of long double: %zu byte\n", sizeof(long double));

return (0);
}
