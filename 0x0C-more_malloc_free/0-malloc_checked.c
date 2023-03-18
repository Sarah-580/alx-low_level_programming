#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: number od malloced byted
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *prt;

	prt = malloc(b);
	if (prt == NULL)
	{
		exit(98);
	}
	return (prt);
}
