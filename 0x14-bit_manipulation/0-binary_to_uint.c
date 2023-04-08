#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned it
 * @b: strings of binary 0 and 1
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			dec = dec << 1;
			if (b[i] == '1')
				dec += 1;
		}
		else
		{
			return (0);
		}
	}

	return (dec);
}
