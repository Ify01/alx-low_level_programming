#include "main.h"

/**
 * jack_bauer - printing playlists by minutes.
 * Return: success and error
 */

void jack_bauer(void)
{
	int firstPlayDigit;
	int lastPlayDigit;

	for (firstPlayDigit = 0; firstPlayDigit < 24; firstPlayDigit++)
	{
		for (lastPlayDigit = 0; lastPlayDigit < 60; lastPlayDigit++)
		{
			_putchar((firstPlayDigit / 10) + '0');
			_putchar((firstPlayDigit % 10) + '0');
			_putchar(':');
			_putchar((lastPlayDigit / 10) +  '0');
			_putchar((lastPlayDigit % 10) + '0');
			_putchar('\n');
		}
	}
}

