#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: the string of s
 * @accept: string of accept
 * Return: success or error
 */


char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *search = accept;

		while (*search != '\0')
		{
			if (*s == *search)
			{
				return (s);
			}
			search++;
		}
		s++;
	}

	return (0);
}
