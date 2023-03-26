#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Entry point
 * @separator: string to be printed between the strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
