#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int bit_index = 0;
	char c;

	if (b == NULL)
		return (0);

	while ((c = b[bit_index++]) != '\0')
	{
		if (c != '0' && c != '1')
			return (0);

		result <<= 1;
		result += (c - '0');
	}

	return (result);
}
