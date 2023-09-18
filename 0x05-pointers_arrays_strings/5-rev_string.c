#include "main.h"
#include <string.h>


/**
 * rev_string - printing string in reverse form
 * @s: the string of the function
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int reverseStringOrder = strlen(s);
	int firstLetter = 0;
	int lastLetter = reverseStringOrder - 1;

	while (firstLetter < lastLetter)
	{
		char reverse = s[firstLetter];

		s[firstLetter] = s[lastLetter];
		s[lastLetter] = reverse;

		firstLetter++;
		lastLetter--;
	}
}
