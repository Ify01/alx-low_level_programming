#include "main.h"

/**
 * _pow_recursion - func that returns the value of x raised to the power of y.
 * @x: returns x raised by y
 * @y: raises x
 * Return: success or error
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
