#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * getLen - gets the length of a string
 * @s: string to get length
 * Return: length of string
 */
int getLen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count = count + 1;
		s = s + 1;
	}
	return (count);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: pointer to string copied
 */
char *_strdup(char *str)
{
	int len = getLen(str);
	char *new, *saved;

	new = malloc(sizeof(char) * (len + 1));
	if (new == 0)
		return (NULL);
	saved = new;

	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		*new = *str;
		new++;
		str++;
	}
	new = '\0';
	return (saved);
}
