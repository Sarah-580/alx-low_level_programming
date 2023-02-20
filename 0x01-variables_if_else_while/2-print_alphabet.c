#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Print alphabet in lowercase
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

	putchar('\n');
	return (0);
}
