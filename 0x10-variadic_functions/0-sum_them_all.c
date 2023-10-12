#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: The number of param.
 * @...: Variable number of integer parameters.
 * Return: success or error.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sumPara = 0;
	va_list args;
	unsigned int para;

	va_start(args, n);

	for (para = 0; para < n; para++)
	{
		sumPara += va_arg(args, int);
	}

	va_end(args);

	return (sumPara);
}
