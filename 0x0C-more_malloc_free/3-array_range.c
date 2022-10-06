#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - this creates an array of integers, i.e min to max
 *
 * @min: d min number to start
 *
 * @max: d max number to start
 *
 * Return: pointer
 *
 */

int *array_range(int min, int max)
{
	int *ptr;
	int diff, i;

	if (min > max)
		return (NULL);
	diff = max - min;
	ptr = malloc((diff + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i <= diff; min++, i++)
	{
		ptr[i] = min;
	}
	return (ptr);
}
