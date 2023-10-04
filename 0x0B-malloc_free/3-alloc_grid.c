#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a func that returns a ptr to a 2 dimensional array of integers
 * @width: the width of array
 * @height: the height of array
 * Return: success or error
 */

int **alloc_grid(int width, int height)
{
	int **display;
	int up;
	int down;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	display = (int **)malloc(height * sizeof(int *));
	if (display == NULL)
	{
		return (NULL);
	}

	for (up = 0; up < height; up++)
	{
		display[up] = (int *)malloc(width * sizeof(int));
		if (display[up] == NULL)
		{
			for (down = 0; down < up; down++)
			{
				free(display[down]);
			}
			free(display);
			return (NULL);
		}
		for (down = 0; down < width; down++)
		{
			display[up][down] = 0;
		}
	}
	return (display);
}
