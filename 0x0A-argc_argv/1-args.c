#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed intoa program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
