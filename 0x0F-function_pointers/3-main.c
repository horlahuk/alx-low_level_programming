#include "3-calc.h"

/**
 * main - performs simple calculation
 * @argc: argument counts
 * @argv: argument variable
 *
 * Return: integer
 */
int main(int argc, char **argv)
{
	int a = atoi(*(argv[1]));
	int b = atoi(*(argv[3]));

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*(argv[2]) == "/") || (*(argv[2]) == "%"))
	{
		if(b == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}
}
