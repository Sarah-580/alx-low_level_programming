#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Print all single digit numbers of base 10 string from 0
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int a;

	for (a =0; a < 10; a++)
	{
		putchar(a + '0');
	}

	putchar('\n');
	return (0);
}
