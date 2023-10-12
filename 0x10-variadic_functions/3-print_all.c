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
	unsigned int i = 0;
	char *separator = "";
	char anything;

	va_start(args, format);

	while (format && format[i])
	{
		anything = format[i];

		switch (anything)
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
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
					{
						printf("%s(nil)", separator);
					}
					else
					{
						printf("%s%s", separator, str);
					}
				}
				break;
		}

		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
