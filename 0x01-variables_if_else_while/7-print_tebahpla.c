#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Prints lowercase in reverse
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
