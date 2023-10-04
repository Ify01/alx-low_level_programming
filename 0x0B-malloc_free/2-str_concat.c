#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: the first string to concat
 * @s2: the second string to concat
 * Return: success or error
 */

char *str_concat(char *s1, char *s2)
{
	char *concatStr;
	size_t firstStr;
	size_t secondStr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	firstStr = strlen(s1);
	secondStr = strlen(s2);

	concatStr = (char *)malloc((firstStr + secondStr + 1) * sizeof(char));

	if (concatStr == NULL)
	{
		return (NULL);
	}

	strcpy(concatStr, s1);
	strcat(concatStr, s2);
	return (concatStr);
}
