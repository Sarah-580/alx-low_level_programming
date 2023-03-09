#include "main.h"
/**
 * find_root - find square root
 * @n: number
 * @root: tests root
 * Return: natural square, or -1 if not natural root
 */
int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - find natural square root of a number
 * @n: number
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
