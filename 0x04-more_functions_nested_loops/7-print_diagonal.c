#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: line segment to print
 */
void print_diagonal(int n)
{
	int x;
	int y;
	
	if (n > 0){
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
				_putchar(' ');
			_putchar(0);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
