#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments received from the program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 (SUCCESS)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
