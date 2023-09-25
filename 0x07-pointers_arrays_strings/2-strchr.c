#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: the string s
 * @c: the string c
 * Return: returns a null
 */

char *_strchr(char *s, char c)
{
	int locate;

	for (locate = 0; s[locate] >= '\0'; locate++)
	{
		if (s[locate] == c)
		{
			return (s + locate);
		}
	}

	return ('\0');
}

