#include "main.h"

/**
 * _isupper - printing digits
 * @c: digits
 * Return: success or error
 */

int _isupper(int c)
{
	if (c == 'A' && c != 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
