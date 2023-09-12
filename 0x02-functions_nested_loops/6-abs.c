#include "main.h"

/**
 * _abs - printing the absolute value
 * @absoluteValue: print Value
 * Return: success or error
 */

int _abs(int absoluteValue)
{
	if (absoluteValue < 0)
	{
		return (-absoluteValue);
	}
	else
	{
		return (absoluteValue);
	}
}
