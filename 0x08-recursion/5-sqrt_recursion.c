#include "main.h"

/**
 * _puts_recursion - a function that returns the natural sq. root of a number.
 * _secondFunc - a function that aids the prototype function
 * @n: square root value
 * @count: checks for values
 * @values: checks for values
 * Return: success or error
 */

int secondFunc(int n, int count, int value)
{
	if (count > value)
	{
		return (-1);
	}

	int num; 
	num = count + (value - count) / 2;
	int root;
	root = num * num;

	if (root == n)
	{
		return (num);
	}
	else if (root < n)
	{
		return (secondFunc(n, num + 1, value));
	}
	else
	{
		return (secondFunc(n, count, num - 1));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (secondFunc(n, 1, n));
	}
}
