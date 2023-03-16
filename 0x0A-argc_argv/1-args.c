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
	int i;

	printf("%d\n", argc);

	for (i = 1; i < argc - 1; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
