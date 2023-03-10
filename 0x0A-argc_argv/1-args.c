#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: argument num
 * @argv: argument array
 * Return: integer
 */
int main(int argc, char **argv)
{
	int count = 0;

	count += argc;

	while (**argv++)
	{
		printf("%d\n", count);
	}	
	return (0);
}
