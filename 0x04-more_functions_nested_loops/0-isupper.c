#include "main.h"

/**
 * _isupper - printing check for upper case
 * @c: the character
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
