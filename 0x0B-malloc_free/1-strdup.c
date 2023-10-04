#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a pointer to a newly allocated space in memory
 * @str: the string
 * Return: success or error
 */

char *_strdup(char *str)
{
	size_t strLength;
	char *strCopy;

	if (str == NULL)
	{
		return (NULL);
	}

	strLength = strlen(str);
	strCopy = (char *)malloc((strLength + 1) * sizeof(char));

	if (strCopy == NULL)
	{
		return (NULL);
	}

	strcpy(strCopy, str);
	return (strCopy);
}
