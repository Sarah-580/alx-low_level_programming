#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Prints alphabets in lowercase, then in uppercase
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
