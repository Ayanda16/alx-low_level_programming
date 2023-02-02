#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @index: index, starting from 0 of the bit you want to get
 * @n: integer to get the bit of
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int num;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	for (num = 0; num < index; num++)
		n = n >> 1;
	return ((n & 1));
}
