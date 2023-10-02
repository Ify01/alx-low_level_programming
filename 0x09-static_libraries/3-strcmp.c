#include "main.h"

/**
 * _strcmp - concatenating strings to output length
 * @s1: length of strings
 * @s2: length of strings
 * Return: succes or error
 */

int _strcmp(char *s1, char *s2)
{
	int concatStr;
	int concatLength = 0;

	for (concatStr = 0; s1[concatStr] != '\0' && concatLength == 0; concatStr++)
	{
		concatLength = s1[concatStr] - s2[concatStr];
	}

	return (concatLength);
}
