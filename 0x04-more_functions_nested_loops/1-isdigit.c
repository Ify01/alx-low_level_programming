#include "main.h"

/**
 * _isdigit - printing digits
 * @c: digits
 * Return: success or error
 */

int _isdigit(int c)
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
