#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: allocated space in memory s1
 * @s2: allocated space in memory s2
 * @n: allocated space in memory n
 * Return: success or error
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t concatStr1;
	size_t concatStr2;
	size_t concatOutput;
	char *output;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	concatStr1 = strlen(s1);
	concatStr2 = strlen(s2);

	concatOutput = (concatStr2 < n) ? concatStr2 : n;
	concatOutput += concatStr1 + 1;

	output = (char *)malloc(concatOutput);

	if (output == NULL)
	{
		return (NULL);
	}
	strcpy(output, s1);
	strncat(output, s2, (concatStr2 < n) ? concatStr2 : n);
	return (output);
}
