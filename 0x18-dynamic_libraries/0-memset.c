#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: A pointer to the memory area to be filled
 * @b: constant value
 * @n: The number of bytes to be filled
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area @s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)

	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}
	return (s);
}
