#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: input array
 * @size: size of an array
 * @cmp: compare values
 * Return: index of the first element
 * which the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
		for (i = 0; i <= size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
