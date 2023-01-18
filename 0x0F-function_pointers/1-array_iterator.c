#include<stdlib.h>
#include"function_pointers.h"

/**
 * array_iterator - executes a function given as parameter on each
 * element of an array
 * @size: size of the array
 * @action: pointer to the function used
 * @array: array being iterated
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int param))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
