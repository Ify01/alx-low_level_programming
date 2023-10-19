#include <stdio.h>

/**
 * theFunction - prints
 * Return: success or error
 */

void theFunction(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

void theCall(void) __attribute__((constructor));

/**
 * theCall - the call
 * Return: success or error
 */

void theCall(void)
{
	theFunction();
}
