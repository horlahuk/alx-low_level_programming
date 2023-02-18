#include <stdio.h>
/**
 * main - printing alphabets without q and e
 *
 * Return: (0) Success
 */
int main(void)
{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
