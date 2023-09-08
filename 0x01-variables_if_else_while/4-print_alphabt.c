#include <stdio.h>

/**
 * main - printing small alphabets in ascending order exclude q and e letters
 *
 * Return: Always 0 successfully
 */

int main(void)
{
	int alphabetsExclusion = 'a';

	while (alphabetsExclusion <= 'z')
	{
		if (alphabetsExclusion != 'q' && alphabetsExclusion != 'e')
		{
			putchar(alphabetsExclusion);
		}

		alphabetsExclusion += 1;
	}

	putchar('\n');
	return (0);
}
