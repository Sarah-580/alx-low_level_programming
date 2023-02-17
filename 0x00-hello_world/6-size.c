#include <stdio.h>

/**
 *  main - A program that print the size of various computer types
 *  return; o (successful)
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of a char: %ru byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a int: %ru byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %ru byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %ru byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %ru byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
