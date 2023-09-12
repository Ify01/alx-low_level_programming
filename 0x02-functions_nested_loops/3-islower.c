#include "main.h"

/**
 * _islower - prints lower case.
 * @c: initialze c
 * Return: return successfully.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
