#include "main.h"
/**
 * string_toupper - change string to uppercase
 * @s: input string
 * Return: pointer to dest
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if ((*(s + i) > 96) && (*(s + i) < 123))
			*(s + i) = *(s + i) - 32;
		i++;
	}
	return (s);
}
