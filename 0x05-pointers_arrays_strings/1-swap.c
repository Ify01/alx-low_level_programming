#include "main.h"


/**
 * swap_int - check the code
 * @a: pointer value a
 * @b: pointer value b
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int swapValue = *a;
	*a = *b;
	*b = swapValue;
}
