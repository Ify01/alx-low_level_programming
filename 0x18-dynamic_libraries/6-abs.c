#include "main.h"

/**
 * _abs - printing the absolute value
 * @absoluteNumberReturn: print Value
 * Return: success or error
 */

int _abs(int absoluteNumberReturn)
{
	if (absoluteNumberReturn < 0)
	{
		return (-absoluteNumberReturn);
	}
	else
	{
		return (absoluteNumberReturn);
	}
}
