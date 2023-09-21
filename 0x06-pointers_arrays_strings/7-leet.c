#include "main.h"

/**
 * leet - mozart
 * @str: the strings
 * Return: success or error
 */

char *leet(char *str)
{
	char *mozart = str;
	char *mozartLetters = "aAeEoOtTlL";
	char *mozartStrings = "4433007711";
	int m;

	while (*str)
	{
		m = 0;
		while (mozartLetters[m])
		{
			if (*str == mozartLetters[m])
			{
				*str = mozartStrings[m];
				break;
			}
			m++;
		}
		str++;
	}

	return (mozart);
}
