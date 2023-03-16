#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name, followed by a new line
 * @argc: argument couner
 * @argv: pointer to array
 * Return: 0 (SUCCESS)
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", *argv);

	return (0);
}
