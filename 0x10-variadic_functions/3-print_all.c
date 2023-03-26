#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: format of data type to be printed
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	unsigned int i = 0;
	char c;
	float f;
	char *s;

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
			default:
				break;
		}
		printf(", ");
	i++;
	}
	printf("\n");

	va_end(args);
}
