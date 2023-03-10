#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two number
 * @argc: argument count
 * @argv: argument array
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	if (argc < 4)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
