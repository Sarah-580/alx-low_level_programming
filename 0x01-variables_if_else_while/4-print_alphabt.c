#include <stdio.h>
/**
 * main - Entry point
 * Prints all alphabet in lowercase except q and e
 * return: 0 (SUCCESS)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
