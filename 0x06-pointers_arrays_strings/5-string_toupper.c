#include "main.h"

/**
 * string_toupper - printing strinsin uppercase
 * @str: the strings
 * Return: success or error
 */


char *string_toupper(char *str)
{
	char *upperCaseStr = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}

	return (upperCaseStr);
}
