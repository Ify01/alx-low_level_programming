#include "main.h"

/**
 * _islower - print c as lowerCase
 *
 * Return: return 1 when the c is lowerCase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
