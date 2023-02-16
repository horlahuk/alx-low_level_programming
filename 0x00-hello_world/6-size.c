#include <stdio.h>
/**
 * main - prints sizes of any type
 * Return: (0)Success
 */

int main(void)
{
	printf("size of char: %d byte(s)\n", sizeof(char));
	printf("size of short: %d byte(s)\n", sizeof(short));
	printf("size of int: %d byte(s)\n", sizeof(int));
	printf("size of float: %d byte(s)\n", sizeof(float));
	printf("size of long int: %d byte(s)\n", sizeof(long int));
	printf("size of long long int: %d byte(s)\n", sizeof(long long int));

return (0);
}
