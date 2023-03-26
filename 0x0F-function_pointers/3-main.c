#include "3-calc.h"

/**
 * main - Entry point
 * @argc: number of arguments passed
 * @argv: array of strings containing the arguments
 * Return: 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
	int a, b, c;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		return (1);
	}

	c = op_func(a, b);
	printf("%d\n", c);

	return (0);
}
