#include <stdio.h>
/**
 * main - printing outputs
 *
 * Return: (0) Success
 */
int main(void)
{	
	char alpha[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');
	return (0);
}
