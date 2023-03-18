#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *concat = NULL;

	if (s1 == NULL)
	{
		s1 = " ";
	}

	if (s2 == NULL)
	{
		s2 = " ";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	concat = malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
	{
		return NULL;
	}

	memcpy(concat, s1, len1);
	memcpy(concat + len1, s2, n);
	concat[len1 + n] = '\0';

	return concat;
}
