#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: min string
 * @max: max string
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		ptr[i] = min++;
	}
	return (ptr);
}
