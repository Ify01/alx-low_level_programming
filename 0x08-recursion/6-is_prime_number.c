#include "main.h"

/**
 * is_prime_number - a func that ret 1, input int is a prime num, ret 0
 * @n: the prime number
 * Return: success or error
 */

int is_prime_number(int n)
{
	int prime;

	if (n <= 1)
	{
		return (0);
	}
	
	for (prime = 2; prime * prime <= n; prime++)
	{
		if (n % prime == 0)
		{
			return (0); 
		}
	}
	
	return (1); 
}
