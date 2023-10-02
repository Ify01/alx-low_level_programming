#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: memoery area
 * @accept: constant byte b
 * Return: success or error
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int prefixLen;
	unsigned int preLen;

	for (prefixLen = 0; s[prefixLen] != '\0'; prefixLen++)
	{
		for (preLen = 0; accept[preLen] != s[prefixLen]; preLen++)
		{
			if (accept[preLen] == '\0')
				return (prefixLen);
		}
	}
	return (prefixLen);
}
