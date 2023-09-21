#include "main.h"

/**
 * cap_string - Expect the best. Prepare for the worst. Capitalize on what come
 * @str: the string
 * Return: success or error
 */



char *cap_string(char *str)
{
	int capitalizeNext = 1;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (capitalizeNext || i == 0)
			{
				str[i] = str[i] & ~32;
			}
			capitalizeNext = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i]
== ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?'
|| str[i] == '\"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
		{
			capitalizeNext = 1;
		}
		else
		{
			capitalizeNext = 0;
		}
		i++;
	}

	return (str);
}
