#include "main.h"
/**
 * print_line - draws a straight line
 * @n: integer params
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
