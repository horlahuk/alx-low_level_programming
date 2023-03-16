#include "main.h"
#include <stdlib.h>

/**
 * getLen - gets the length of a string
 * @s: string
 * Return: integer
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
 * _ncpy - copy strings upto n bytes
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: string
 */
char *_ncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < (n - 1); i++)
		dest[i] = '\0';
	return (dest);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from second string
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2;
	char *result;

	len1 = getLen(s1);
	len2 = getLen(s2);
	result = malloc(sizeof(char) * (len1 + n + 1));
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (result == NULL)
		return (NULL);
	if (n >= len2)
		n = len2;

	_ncpy(result, s1, len1);
	_ncpy(result + len1, s2, n);

	result[len1 + n] = '\0';

	return (result);
}
