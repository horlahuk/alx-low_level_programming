#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	/*If the first byte of the integer contains the least significant byte,*/
	/*then the system is little endian.*/
	if (*c == 1)
		return (1); /*little endian*/
	else
		return (0); /*big endian*/
}
