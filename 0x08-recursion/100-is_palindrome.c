#include "main.h"
#include <string.h>
/**
 * _strlen - return length of string
 * @str: string
 * Return: length of str
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (1 + strlen(str + 1));
}

/**
 * check_palindrome - check string to see if its a palindrome
 * @a: left hand index
 * @b: right hand index
 * @c: possible palindrome
 * Return: 1 if palindrome 0 if not
 */
int check_palindrome(int a, int b, char *c)
{
	if (a >= b)
		return (1);
	else if (c[a] != c[b])
		return (0);
	return (check_palindrome(a + 1, b - 1, c));
}

/**
 * is_palindrome - if a string is a palindrome
 * @s: string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) - 1;
	return (check_palindrome(0, i, s));
}
