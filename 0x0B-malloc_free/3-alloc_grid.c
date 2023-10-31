#include "main.h"

/**
 * alloc_grid - allocate 2d grid(height * width) of 0 value-elements.
 *
 * @height: input height of grid
 * @width: input widht of grit
 * Return: pointer to the grid
 */
int **alloc_grid(int width, int height)
{
	int **array;
	unsigned int i = 0, j = 0;

	array = (int **) malloc(sizeof(int*) * (height));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * (width));
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
				free(array[j]);
			return (NULL);
		}
		
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	array[i] = '\0';

	return (array);
}
