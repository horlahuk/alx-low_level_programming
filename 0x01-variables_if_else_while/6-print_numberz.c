#include <stdio.h>
/**
 * main - print numbers from 0 - 10 using putchar
 *
 * Return: (0) Success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%d", i);
	}
	putchar('\n');
	return (0);
}
