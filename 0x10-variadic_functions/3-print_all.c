#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: the format
 * @...: number of arguments.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int p = 0;
	char *separator = "";
	char *string;

	va_start(args, format);

	while (format && format[p])
	{
		switch (format[p])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, (float)va_arg(args, double));
				break;
			case 's':
				string = va_arg(args, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", separator, string);
				break;
			default:
				p++;
				continue;
		}
		separator = ", ";
		p++;
	}
	printf("\n");
	va_end(args);
}
