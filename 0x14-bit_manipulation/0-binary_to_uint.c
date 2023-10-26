#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - a function that converts a binary number
 * @b: the binary
 * Return: success or error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int output;

	output = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		output = output * 2 + (*b - '0');
		b++;
	}
	return (output);
}
