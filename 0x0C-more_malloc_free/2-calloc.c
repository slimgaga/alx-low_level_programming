#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - this allocate the memory for an array called usingmalloc
 *
 * @nmemb: the number elements
 *
 * @size: the size of bytes
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, (nmemb * size));
	return (ptr);
}

/**
 * _memset - this sets first n bytes of the memory allocation area
 *
 * @s: an array to set
 *
 * @b: set it to
 *
 * @n: the first n bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
