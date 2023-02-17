#include <stdio.h>

/**
 *  main - A program that print the size of various computer types
 *  return; o (successful)
 */

int main(void)
{

printf("Size of a char: %ru byte(s)\n", (unsigned long)sizeof(char));
printf("Size of a int: %ru byte(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %ru byte(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %ru byte(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %ru byte(s)\n", (unsigned long)sizeof(float));
return (0);
}
