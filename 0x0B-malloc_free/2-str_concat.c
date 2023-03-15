#include <stdlib.h>
#include "main.h"

/**
 * getLen - gets the length of a string
 * @s: string
 *
 * Return: length of string
 */
int getLen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
 * cpy - copy src string to dest string
 * @dest: destination
 * @src: source
 *
 * Return: void
 */
void cpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space in memory containing
 * concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = getLen(s1);
	len2 = getLen(s2);
	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
		return (NULL);

	cpy(result, s1);
	cpy(result + len1, s2);

	return (result);
}
