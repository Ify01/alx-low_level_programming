#include "main.h"

/**
 * _isalpha - prints upper case.
 * @c: initialze c
 * Return: return successfully.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
