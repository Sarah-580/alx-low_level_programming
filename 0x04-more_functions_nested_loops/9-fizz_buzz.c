#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100
 * if number is multiple of 3 print "Fizz"
 * if number is multiple of 5 print "Buzz"
 * if number if multiple of 3 and 5 print "FizzBuzz"
 * Return: 0 (SUCCESS)
 */
int main(void)
{
	int i = 2, j = 1;

	printf("%d", j);

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		++i;
	}
	printf("\n");
	return (0);
}
