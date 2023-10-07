#include <stdlib.h>
#include "main.h"
/**
  *array_range - creates an array of integers.
  *@min: minimum value.
  *@max: maximum value.
  *
  *Return: pointer to newly created array.
  *NULL if malloc fails.
  *NULL if min > max.
  */
int *array_range(int min, int max)
{
	int range, i;
	int *pt;

	range = 0;

	if (min > max)
		return (NULL);

	range = ((max + 1) - min);

	pt = malloc(range * sizeof(int));

	if (pt == NULL)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(pt + i) = min + i;
	}

	return (pt);
}
