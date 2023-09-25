#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: the string s
 * @c: the string c
 * Return: returns a null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (char *)s;;
		}
		s++;
	}

	return (0);
}
