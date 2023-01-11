#include"main.h"
#include<stdlib.h>

/**
 * alloc_grid - allocates memory for a 2D array of ints
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to 2D array, on error return NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr, i = 0, n = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);

	while (i < height)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				i--;
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
		for (n = 0; n < width; n++)
			arr[i][n] = 0;
	return (arr);
}
