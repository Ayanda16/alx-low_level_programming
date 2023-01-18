#include<stdlib.h>
#include"function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: number of elements in an array
 * @array: array we are searching in
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which cmp does not return 0
 * otherwise if no element matches or size <=0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
