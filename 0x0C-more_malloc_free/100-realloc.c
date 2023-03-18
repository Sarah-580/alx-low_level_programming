#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size of old ptr
 * @new_size: size of new ptr
 * Return: reallocated ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}

	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
		free(ptr);
	}
	return (new_ptr);
}
