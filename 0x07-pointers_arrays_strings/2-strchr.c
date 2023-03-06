#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: string character
 * @c: character to be located
 * Return: pointer to the first occurrence of c
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
