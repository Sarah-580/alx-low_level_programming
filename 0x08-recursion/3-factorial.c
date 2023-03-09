#include "main.h"
/**
 * factorial - find factorial number
 * @n: number
 * Return: the factorial of a given number
 * If n is lower than 0
 * the function should return -1 to indicate an error
 * Factorial of 0 is 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
