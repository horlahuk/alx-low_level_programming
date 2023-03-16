#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array size
 * @size: elements size
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, memTot;

	memTot = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(memTot);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < memTot; i++)
		p[i] = 0;
	return (p);
}
