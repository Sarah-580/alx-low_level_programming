#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of argument
 * @argv: argument vector
 * Return: 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
	int i, size;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	size = atoi(argv[1]);

	if (size < 0)
	{
		printf("Error\n");
		return (2);
	}

	for (i = 0; i < size; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < size - 1)
			printf("\n");
	}
	return (0);
}
