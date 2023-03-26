#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter on element of array
 * @array: array to execute function
 * @size: size of the array
 * @actin: pointer to the function need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
		while (size--)
			action(*(array++));
}
