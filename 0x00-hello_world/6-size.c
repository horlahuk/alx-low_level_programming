#include <stdio.h>
/**
 * main - prints sizes of any type
 * Return: (0)Success
 */

int main(void)
{
	printf("size of char: %d byte\n", sizeof(char));
	printf("size of short: %d byte\n", sizeof(short));
	printf("size of int: %d byte\n", sizeof(int));
	printf("size of float: %d byte\n", sizeof(float));
	printf("size of long int: %d byte\n", sizeof(long int));
	printf("size of long long int: %d byte\n", sizeof(long long int));
	printf("size of double: %d byte\n", sizeof(double));
	printf("size of long double: %d byte\n", sizeof(long double));

return (0);
}
