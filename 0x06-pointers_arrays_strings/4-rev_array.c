#include"main.h"

/**
 * reverse_array: reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	n = n - 1;
	while (i <= n)
	{
		j = a[i];
		a[i++] = a[n];
		a[n--] = j;
	}
}
