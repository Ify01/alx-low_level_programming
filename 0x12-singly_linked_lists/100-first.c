#include <stdio.h>

/**
 * before_main_message - prints
 * Return: success or error
 */

void theFunction() __attribute__((constructor));

void theFunction()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
