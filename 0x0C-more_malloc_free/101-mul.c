#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * is_positive_digit - multiplies two positive numbers
 * main - entry point
 * @str: string
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (SUCCESS)
 */
int is_positive_digit(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	char *num1_str = argv[1];
	char *num2_str = argv[2];

	int num1 = atoi(num1_str);
	int num2 = atoi(num2_str);
	int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_positive_digit(num1_str) || !is_positive_digit(num2_str))
	{
		printf("Error\n");
		return (98);
	}

	printf("%d\n", result);
	return (0);
}
