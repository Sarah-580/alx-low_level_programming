#include "main.h"
/**
 * check for lowercase character(s)
 * @c: The caharcter to be checked
 * Return: 1 for lowercase charcter or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
