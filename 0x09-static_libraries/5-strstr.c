#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: string for haystack.
 * @needle: string for needle.
 * Return: success or error
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *hayStr = haystack;
		char *needStr = needle;

		while (*needStr && (*hayStr == *needStr))
		{
			hayStr++;
			needStr++;
		}

		if (*needStr == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
