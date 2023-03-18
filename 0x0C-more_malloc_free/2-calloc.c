#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements of pointer
 * @size: size of each member
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char  *ptr;

	if (nmemb == 0 || size == 0)
	{
		return NULL;
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return NULL;
	}

	memset(ptr, 0, nmemb * size);
	{
		return ptr;
	}
}
