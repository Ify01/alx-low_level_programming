#include "main.h"

/**
 * _isupper - printing digits
 * @c: digits
 * Return: success or error
 */

int _isupper(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
