#include "main.h"

/**
 * flip_bits - a function that returns the number of bits.
 * @n: flip number.
 * @m: number.
 * Return: success or error.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipNum;
	unsigned int num;

	flipNum = n ^ m;
	num = 0;

	while (flipNum > 0)
	{
		num += flipNum & 1;
		flipNum >>= 1;
	}
	return (num);
}

