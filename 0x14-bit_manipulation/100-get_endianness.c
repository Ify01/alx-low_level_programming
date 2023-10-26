#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: success or error
 */
int get_endianness(void)
{
	unsigned int y = 1;
	unsigned char *check = (unsigned char *)&y;

	return ((int)*check);
}

